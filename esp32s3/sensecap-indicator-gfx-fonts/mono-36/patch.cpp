#include <FreeMono36pt7b.h>

node {
    GFXfont font = FreeMono36pt7b;
    void evaluate(Context ctx) {
        emitValue<output_Font>(ctx, &font);
    }
}