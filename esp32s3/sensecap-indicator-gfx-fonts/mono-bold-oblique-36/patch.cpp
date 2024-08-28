#include <FreeMonoBoldOblique36pt7b.h>

node {
    GFXfont font = FreeMonoBoldOblique36pt7b;
    void evaluate(Context ctx) {
        emitValue<output_Font>(ctx, &font);
    }
}
