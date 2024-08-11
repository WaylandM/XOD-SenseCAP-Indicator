#pragma XOD evaluate_on_pin disable
#pragma XOD evaluate_on_pin enable input_INIT

node {

    void evaluate(Context ctx) {
        // The node responds only if there is an input pulse
        if (!isInputDirty<input_INIT>(ctx))
            return;

        auto gfx = getValue<input_DEV>(ctx);

        if (!gfx->begin()) {
            raiseError(ctx);
            return;
        }

        //gfx->fillScreen(BLACK);
        //pinMode(GFX_BL, OUTPUT);
        //digitalWrite(GFX_BL, HIGH);
        
        emitValue<output_OK>(ctx, 1);

    }
}
