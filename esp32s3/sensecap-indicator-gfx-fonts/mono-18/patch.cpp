#include <FreeMono18pt7b.h>

node {
    GFXfont font = FreeMono18pt7b;
    void evaluate(Context ctx) {
        emitValue<output_Font>(ctx, &font);
    }
}
