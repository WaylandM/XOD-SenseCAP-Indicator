#include <FreeMono24pt7b.h>

node {
    GFXfont font = FreeMono24pt7b;
    void evaluate(Context ctx) {
        emitValue<output_Font>(ctx, &font);
    }
}
