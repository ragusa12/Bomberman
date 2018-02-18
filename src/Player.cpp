#include "Player.h"

Player::Player( std::vector<AnimatedSprite> _anim_sprs ) {
    position = new sf::Vector2f(0, 0);

    sprController = new SpriteController(_anim_sprs);
}

void Player::setPosition( float _x, float _y ) {
    position->x = _x;
    position->y = _y;
}

void Player::draw() {
    sprController->setPositionCurrent( *position );
    sprController->drawCurrent();
}
