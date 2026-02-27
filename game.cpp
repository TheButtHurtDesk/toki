#include "game.h"
#include "menu_state.h"

Game::Game(unsigned window_width, unsigned window_height, std::string const& game_name)
: window {sf::VideoMode(window_width, window_height, game_name)}
, curr_state {nullptr}
, state_map{}

{
    state_map[0] = new Menu_state(&window);
    curr_state = state_map[0];
}

void Game::start_game()
{
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

    }
}