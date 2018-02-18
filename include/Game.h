#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>

#include "Player.h"

#include <vector>

class Game
{
public:
    Game( sf::RenderWindow* _window );

    void game_active();

    int tileScale = 50;

    enum { EMPTY, STONE, BOX };

private:
    sf::RenderWindow* window = nullptr;

    int mapSize = 15;
    std::vector< std::vector<int> > gameMap;
};

#endif // GAME_H
