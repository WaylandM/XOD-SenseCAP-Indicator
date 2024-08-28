#include <FreeMonoBoldOblique30pt7b.h>

node {
    GFXfont font = FreeMonoBoldOblique30pt7b;
    void evaluate(Context ctx) {
        emitValue<output_Font>(ctx, &font);
    }
}
