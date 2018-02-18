#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/System/Vector2.hpp>

#include <string>

#include "SpriteController.h"
#include "AnimatedSprite.h"

class Player
{
public:
    Player( std::vector<AnimatedSprite> _anim_sprs );

    void setPosition( float _x, float _y );

    void draw();

private:
    sf::Vector2f* position = nullptr;

    SpriteController* sprController = nullptr;

};

#endif // PLAYER_H
