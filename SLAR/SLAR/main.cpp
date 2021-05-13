#include <SFML/Graphics.hpp>

using namespace sf;
int main() {
    
    sf::RenderWindow window (sf::VideoMode(1500, 1000), "Mila's Project");
    
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
        window.clear();
        
        // draw objects here
        window.display();
    }
}
