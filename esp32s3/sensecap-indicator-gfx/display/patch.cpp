#pragma XOD require "https://github.com/WaylandM/Seeed_Arduino_GFX"
#pragma XOD require "https://github.com/hideakitai/PCA95x5"

#include <Arduino_GFX_Library.h>
#include <PCA95x5.h>

node {
    #define GFX_DEV_DEVICE ESP32_S3_RGB
    #define GFX_BL 45

    
    meta {
        using Type = Arduino_RGB_Display*;
    }

    Arduino_DataBus *bus = new Arduino_SWSPI(
        GFX_NOT_DEFINED /* DC */, PCA95x5::Port::P04 /* CS */,
        41 /* SCK */, 48 /* MOSI */, GFX_NOT_DEFINED /* MISO */);
    
    Arduino_ESP32RGBPanel *rgbpanel = new Arduino_ESP32RGBPanel(
        18 /* DE */, 17 /* VSYNC */, 16 /* HSYNC */, 21 /* PCLK */,
        4 /* R0 */, 3 /* R1 */, 2 /* R2 */, 1 /* R3 */, 0 /* R4 */,
        10 /* G0 */, 9 /* G1 */, 8 /* G2 */, 7 /* G3 */, 6 /* G4 */, 5 /* G5 */,
        15 /* B0 */, 14 /* B1 */, 13 /* B2 */, 12 /* B3 */, 11 /* B4 */,
        1 /* hsync_polarity */, 10 /* hsync_front_porch */, 8 /* hsync_pulse_width */, 50 /* hsync_back_porch */,
        1 /* vsync_polarity */, 10 /* vsync_front_porch */, 8 /* vsync_pulse_width */, 20 /* vsync_back_porch */);
    
    Arduino_RGB_Display gfx = Arduino_RGB_Display(
        480 /* width */, 480 /* height */, rgbpanel, 2 /* rotation */, true /* auto_flush */,
        bus, GFX_NOT_DEFINED /* RST */, st7701_type1_init_operations, sizeof(st7701_type1_init_operations));


    void evaluate(Context ctx) {
         emitValue<output_DEV>(ctx, &gfx);
    }
}
