#include <FreeMonoBold24pt7b.h>

node {
    GFXfont font = FreeMonoBold24pt7b;
    void evaluate(Context ctx) {
        emitValue<output_Font>(ctx, &font);
    }
}
