#include <FreeMonoBold12pt7b.h>

node {
    GFXfont font = FreeMonoBold12pt7b;
    void evaluate(Context ctx) {
        emitValue<output_Font>(ctx, &font);
    }
}
