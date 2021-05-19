#include "classTextDesign.hpp"

TextDesign::TextDesign ()  {
    
    Font font;
    font.loadFromFile(fontSTR);
    text.setFont(font);
}

TextDesign&  TextDesign::str (String str)             {text.setString(str);  return *this;}
TextDesign&  TextDesign::size (int size)              {text.setCharacterSize(size);  return *this;}
TextDesign&  TextDesign::color (int R, int G, int B)  {text.setFillColor(Color(R, G, B));  return *this;}
TextDesign&  TextDesign::setPos (int X, int Y)        {text.setPosition(X, Y); return *this;}


TextDesign&  TextDesign::setOnCentre() {
    FloatRect textCentre = text.getLocalBounds();
    text.setOrigin(textCentre.width/2,textCentre.height/2);
    text.setPosition(Vector2f(width/2.0f,0.0f));
    return *this;
}

