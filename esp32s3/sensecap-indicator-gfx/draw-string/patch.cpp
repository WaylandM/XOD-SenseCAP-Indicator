#pragma XOD evaluate_on_pin disable
#pragma XOD evaluate_on_pin enable input_UPD

node {
    void evaluate(Context ctx) {
        // The node responds only if there is an input pulse
        if (!isInputDirty<input_UPD>(ctx))
            return;

        // Get a pointer to the `TFT_eSPI tft` class instance
        auto tft = getValue<input_DEV>(ctx);

        auto xString = getValue<input_String>(ctx);
        int N=length(xString) + 1;
        char cString[N];
        for(int i=0;i<N;i++)
            cString[i]=0;
        dump(xString, cString);

        XColor color24 = getValue<input_Color>(ctx);
        uint16_t color16 = ((color24.r & 0xF8) << 8) | ((color24.g & 0xFC) << 3) | (color24.b >> 3);

        tft -> setTextColor(color16);
        tft -> setFont(getValue<input_Font>(ctx));
        tft -> setTextSize(getValue<input_Size>(ctx));
        tft -> setCursor(getValue<input_X>(ctx), getValue<input_Y>(ctx));
        tft -> println(cString);

        emitValue<output_Done>(ctx, 1);
    }
}
