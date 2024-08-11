
node {
    void evaluate(Context ctx) {
        // The node responds only if there is an input pulse
        if (!isInputDirty<input_UPD>(ctx))
            return;

        pinMode(GFX_BL, OUTPUT);
        digitalWrite(GFX_BL, getValue<input_ON>(ctx));

        emitValue<output_Done>(ctx, 1);
    }
}
