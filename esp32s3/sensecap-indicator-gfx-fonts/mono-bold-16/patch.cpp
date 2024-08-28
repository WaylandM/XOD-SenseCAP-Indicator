#include <FreeMonoBold16pt7b.h>

node {
    GFXfont font = FreeMonoBold16pt7b;
    void evaluate(Context ctx) {
        emitValue<output_Font>(ctx, &font);
    }
}
