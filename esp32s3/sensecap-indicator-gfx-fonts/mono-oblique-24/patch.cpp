#include <FreeMonoOblique24pt7b.h>

node {
    GFXfont font = FreeMonoOblique24pt7b;
    void evaluate(Context ctx) {
        emitValue<output_Font>(ctx, &font);
    }
}
