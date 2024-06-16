
#pragma XOD evaluate_on_pin disable
#pragma XOD evaluate_on_pin enable input_W
#pragma XOD error_raise enable

#include <SPI.h>
#include <SD.h>


struct State {
    bool begun;
};

node {
    bool begun;
    const int csPin = 13;

    void evaluate(Context ctx) {
        if (!isInputDirty<input_W>(ctx))
            return;

        if (!begun) {
            // First time use, initialize
            begun = SD.begin(csPin, 1000000, SPI1);
        }

        if (!begun) {
            // Initialization failed (wrong connection, no SD card)
            raiseError(ctx);
            return;
        }

        char filename[16] = { 0 };
        dump(getValue<input_FILE>(ctx), filename);
        File file = SD.open(filename, O_WRITE | O_CREAT | O_APPEND);
        if (!file) {
            // Failed to open the file. Maybe, SD card gone,
            // try to reinit next time
            begun = false;
            raiseError(ctx); // Can't open file
            return;
        }

        XString line = getValue<input_LINE>(ctx);
        size_t lastWriteSize;
        for (auto it = line.iterate(); it; ++it) {
            lastWriteSize = file.print(*it);
            if (lastWriteSize == 0) {
                begun = false;
                raiseError(ctx); // No bytes written
                return;
            }
        }

        file.print('\n');
        file.flush();
        file.close();
        emitValue<output_DONE>(ctx, 1);
    }
}

