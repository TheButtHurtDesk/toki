#pragma once
#include <SFML/Graphics.hpp>

int const MENU_STATE{0};
int const GAME_STATE{1};
int const TD_STATE{2}; // Towerdefence state
int const GAMEOVER_STATE{3};

class State
{
    public:
    virtual ~State() = default;
    virtual void handle_event(sf::Event event) = 0;
    virtual void render(sf::RenderTarget & target) = 0;
    virtual void init_background(sf::Texture& texture, sf::Sprite& sprite) = 0;
    virtual void init_button(sf::Texture & texture, sf::Sprite & sprite) = 0;
    virtual int get_next_state() = 0;

}