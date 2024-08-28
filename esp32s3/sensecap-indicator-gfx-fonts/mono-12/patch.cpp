#include <FreeMono12pt7b.h>

node {
    GFXfont font = FreeMono12pt7b;
    void evaluate(Context ctx) {
        emitValue<output_Font>(ctx, &font);
    }
}
