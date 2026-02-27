#include "game.h"
#include "menu_state.h"
#include <iostream>




Game::Game(unsigned window_width, unsigned window_height, std::string const& game_name)
: window {sf::VideoMode(window_width, window_height), game_name}
//, curr_state {nullptr}
, state_map{}

{
    //state_map[0] = new Menu_state(&window);
    //curr_state = state_map[0];
}

void Game::render(int curr_state, sf::RenderTarget & window)
{
    sf::Texture t{};
    if(!t.loadFromFile("backround.png"))
    {

    }
    sf::Texture t1{};
    if(!t1.loadFromFile("backround2.jpeg"))
    {

    }

    sf::Sprite s{};
    
    if (curr_state == 0)
    {
        s.setTexture(t);
        float scaleX = (float)window.getSize().x / 389;
        float scaleY = (float)window.getSize().y / 306;
        s.setScale(scaleX, scaleY);
        window.draw(s);
    }

    if(curr_state == 1)
    {
        s.setTexture(t1);
        //s.setOrigin(sf::Vector2f(100.f, 100.f));
        float scaleX = (float)window.getSize().x / 1200;
        float scaleY = (float)window.getSize().y / 1600;
        s.setScale(scaleX, scaleY);
        //s.setPosition(sf::Vector2f(200.f, -200.f));
        window.draw(s);
    }

}

void Game::start_game()
{
    int curr_state{0};
    sf::Texture texture{};
    if (!texture.loadFromFile("smallsteps.jpg"))
    {
        // error...
    }
    sf::Sprite S{};
    S.setTexture(texture);

    while (window.isOpen())
    {
        //curr_state = get_state(); //returns integer
        // Event handler
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (curr_state == 0)
            {
                //start_state
                while (event.type == sf::Event::MouseButtonPressed)
                {
                    std::cout << "Mouse press detected!" << std::endl;
                    window.draw(S);
                    window.display();
                    //S.move(sf::Vector2f(5.f, 0.f));
                    window.pollEvent(event);
                    if (event.type == sf::Event::MouseButtonReleased)
                    {
                        break;
                    }
                }

            }

            if (curr_state == 4)
            {
                //game_over_state
                while (event.type == sf::Event::MouseButtonPressed)
                {
                    std::cout << "Mouse press detected!" << std::endl;
                    window.draw(S);
                    window.display();
                    //S.move(sf::Vector2f(5.f, 0.f));
                    window.pollEvent(event);
                    if (event.type == sf::Event::MouseButtonReleased)
                    {
                        break;
                    }
                }

            }

            if (event.type == sf::Event::KeyPressed)
            {
                std::cout << "key pressed" << std::endl;
                curr_state = 1;
                S.move(sf::Vector2f(5.f, 0.f));
                //Menu_State::get_next_state();
            }

            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
        std::cout << "End of game loop" << std::endl;
        window.clear();
        render(curr_state, window);
        window.display();
    }
}