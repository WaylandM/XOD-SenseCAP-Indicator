#include <FreeMonoOblique30pt7b.h>

node {
    GFXfont font = FreeMonoOblique30pt7b;
    void evaluate(Context ctx) {
        emitValue<output_Font>(ctx, &font);
    }
}
