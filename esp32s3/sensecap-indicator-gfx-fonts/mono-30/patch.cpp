#include <FreeMono30pt7b.h>

node {
    GFXfont font = FreeMono30pt7b;
    void evaluate(Context ctx) {
        emitValue<output_Font>(ctx, &font);
    }
}
