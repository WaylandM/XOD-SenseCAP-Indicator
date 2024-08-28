#include <FreeMonoBold18pt7b.h>

node {
    GFXfont font = FreeMonoBold18pt7b;
    void evaluate(Context ctx) {
        emitValue<output_Font>(ctx, &font);
    }
}
