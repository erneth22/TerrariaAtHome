#include "../game.h"

void game::Run() {
    auto window = sf::RenderWindow({640,380}, "Terraria At Home");

    while (window.isOpen()) 
    {
        for (auto event = sf::Event(); window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed 
            || (event.key.code == sf::Keyboard::Escape))
            {
                window.close();
            }
        }

        window.clear(sf::Color(100,190,100,255));
        
        window.display();
    }

}
