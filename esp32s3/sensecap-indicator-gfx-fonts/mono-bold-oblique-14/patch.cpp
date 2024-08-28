#include <FreeMonoBoldOblique14pt7b.h>

node {
    GFXfont font = FreeMonoBoldOblique14pt7b;
    void evaluate(Context ctx) {
        emitValue<output_Font>(ctx, &font);
    }
}
