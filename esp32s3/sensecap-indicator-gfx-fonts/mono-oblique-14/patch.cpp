#include <FreeMonoOblique14pt7b.h>

node {
    GFXfont font = FreeMonoOblique14pt7b;
    void evaluate(Context ctx) {
        emitValue<output_Font>(ctx, &font);
    }
}
