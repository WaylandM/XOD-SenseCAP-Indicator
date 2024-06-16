#pragma XOD evaluate_on_pin disable
#pragma XOD evaluate_on_pin enable input_UPD

node {

    const int powerPin = 18;
    
    
    void evaluate(Context ctx) {

        // The node responds only if there is an input pulse
        if (!isInputDirty<input_UPD>(ctx))
            return;

        bool powerOn = getValue<input_Active>(ctx);
        pinMode(powerPin, OUTPUT);
        if (powerOn) {
            digitalWrite(powerPin, HIGH);
        } else {
            digitalWrite(powerPin, LOW);
        }

        emitValue<output_Done>(ctx, 1);
    }
}
