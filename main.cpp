#include <iostream>
#include <SFML/Graphics.hpp>
#include "state.h"
#include "game.h"

int main()
{
    std::cout << "1, 2, 3, 4, jag är en party myra!" << std::endl;
    Game g {1920, 1080, "Toki"};
    g.start_game();
    /*sf::RenderWindow window(sf::VideoMode(640, 480), "Toki");
    sf::CircleShape shape(200);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
        window.clear();
        window.draw(shape);
        window.display();
    }*/
    

    return 0;
}