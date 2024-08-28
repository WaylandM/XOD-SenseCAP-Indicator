#include <FreeMonoBoldOblique18pt7b.h>

node {
    GFXfont font = FreeMonoBoldOblique18pt7b;
    void evaluate(Context ctx) {
        emitValue<output_Font>(ctx, &font);
    }
}
