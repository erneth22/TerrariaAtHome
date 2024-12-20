#include "game.h"

void game::Run() {

    auto window = sf::RenderWindow({640,380}, "Terraria At Home");
    sf::RectangleShape player(sf::Vector2f(25,50));
    player.setPosition(640/2, 380/2);
    
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
        window.draw(player);
        
        window.display();
    }

}


