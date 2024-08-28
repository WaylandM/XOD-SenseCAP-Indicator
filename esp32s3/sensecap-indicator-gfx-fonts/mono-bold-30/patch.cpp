#include <FreeMonoBold30pt7b.h>

node {
    GFXfont font = FreeMonoBold30pt7b;
    void evaluate(Context ctx) {
        emitValue<output_Font>(ctx, &font);
    }
}
