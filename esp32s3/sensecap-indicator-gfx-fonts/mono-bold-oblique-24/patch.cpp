#include <FreeMonoBoldOblique24pt7b.h>

node {
    GFXfont font = FreeMonoBoldOblique24pt7b;
    void evaluate(Context ctx) {
        emitValue<output_Font>(ctx, &font);
    }
}
