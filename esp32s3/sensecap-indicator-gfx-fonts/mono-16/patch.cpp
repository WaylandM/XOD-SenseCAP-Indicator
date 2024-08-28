#include <FreeMono16pt7b.h>

node {
    GFXfont font = FreeMono16pt7b;
    void evaluate(Context ctx) {
        emitValue<output_Font>(ctx, &font);
    }
}
