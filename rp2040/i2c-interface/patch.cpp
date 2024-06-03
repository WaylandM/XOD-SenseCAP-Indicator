#include <Wire.h>

node {
    meta {
        using Type = TwoWire*;
    }

    void evaluate(Context ctx) {
        Wire.setSDA(20);
        Wire.setSCL(21);
        Wire.begin();
        emitValue<output_OUT>(ctx, &Wire);
    }
}
