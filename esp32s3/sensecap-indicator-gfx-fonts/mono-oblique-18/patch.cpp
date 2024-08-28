#include <FreeMonoOblique18pt7b.h>

node {
    GFXfont font = FreeMonoOblique18pt7b;
    void evaluate(Context ctx) {
        emitValue<output_Font>(ctx, &font);
    }
}
