#include "GUI.hpp"

extern const int width;
extern const int length;

void window ()
{
    // BlackBlue   = 68, 75, 85
    // Blue        = 129, 153, 164
    // Grey        = 181, 175, 161
    // Orange      = 225, 180, 147
    // LightOrange = 247, 214, 181
    
    ContextSettings settings;
    settings.antialiasingLevel = 50;
    
    sf::RenderWindow window (sf::VideoMode(width, length), "Mila's Project");
    
    while (window.isOpen())
    {
        sf::Event event;
        
        // handle all events
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
                case sf::Event::Closed:
                    window.close();
                    
                    break;
            }
        }
        
        // update the game
        window.clear(Color(68, 75, 85, 0));
        /*
        TextDesign design1;
        design1.str("Choose one method").size(50).color(247, 214, 181).setOnCentre();
        window.draw(design1.getText());
        */
        Font font;
        font.loadFromFile("font.ttf");
        
        Text text;
        text.setString("Hi");
        text.setFont(font);
        text.setCharacterSize(50);
        text.setFillColor(Color(247, 214, 181));
        FloatRect textCentre = text.getLocalBounds();
        text.setOrigin(textCentre.width/2,textCentre.height/2);
        text.setPosition(Vector2f(width/2.0f,0.0f));
        window.draw(text);
        
        
        // draw objects here
        window.display();
    }
}
