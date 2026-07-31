#include <InkplateMotion.h>

Inkplate inkplate;

void setup() {
    inkplate.begin(INKPLATE_BLACKWHITE);
    inkplate.clearDisplay();
    inkplate.setTextSize(4);
    inkplate.setCursor(80, 300);
    inkplate.print("Hello Inkplate!");
    inkplate.display();
}

void loop() {}
