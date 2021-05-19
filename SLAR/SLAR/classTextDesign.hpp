#pragma once
#include "librariesForGUI.hpp"

extern const int width;
extern const int length;

class TextDesign {
    String fontSTR = "font.ttf";
    Text text;
    
public:
    
    TextDesign ();
    Text& getText() {
        return text;
    }
    
    TextDesign&  str (String str);
    TextDesign&  size (int size);
    TextDesign&  color (int R, int G, int B);
    TextDesign&  setPos (int X, int Y);
    TextDesign&  setOnCentre();
};
