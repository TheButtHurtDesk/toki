#include "state.h"
#include <SFML/Graphics.hpp>


class Menu_state : public State
{
    public:
    Menu_state(sf::RenderWindow* window);

    void handle_event(sf::Event event) override;
    void render (sf::RenderTarget & target) override;
    void init_background(sf::Texture & texture, sf::Sprite & sprite) override;
    void init_button(sf::Texture & texture, sf::Sprite & sprite) override;
    int get_next_state() override;

    protected:

    private:
}