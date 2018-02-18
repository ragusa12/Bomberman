#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/System/Vector2.hpp>

#include <string>

#include "AnimatedSprite.h"

class Player
{
public:
    Player();

    void setPosition( float _x, float _y );

    void setAnimatedSprite( std::string src, sf::RenderWindow* _window);

    sf::Sprite* draw();

private:
    sf::Vector2f* position = nullptr;
    AnimatedSprite* animspr = nullptr;
};

#endif // PLAYER_H
