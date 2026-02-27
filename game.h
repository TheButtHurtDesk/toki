#pragma once
#include "state.h"
#include <SFML/Graphics.hpp>


class Game 
{
    public:
    Game(unsigned window_width, unsigned window_height, std::string const& game_name);

    ~Game() = default;

    void start_game();

    private:
    sf::RenderWindow window;
    State* curr_state{};
    std::map<int, State*> state_map;
};