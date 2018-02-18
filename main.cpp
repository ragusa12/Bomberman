#include <SFML/Graphics.hpp>

#include "Game.h"

int main()
{
    sf::RenderWindow window( sf::VideoMode(850, 850), "Bomber Man" );

    Game game( &window );
    game.game_active();

    return 0;
}
