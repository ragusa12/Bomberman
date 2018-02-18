#include "Player.h"

Player::Player() {
    position = new sf::Vector2f(0, 0);
}

void Player::setPosition( float _x, float _y ) {
    position->x = _x;
    position->y = _y;
}

void Player::setAnimatedSprite( std::string src, sf::RenderWindow* _window ) {
    animspr = new AnimatedSprite( _window, src, 50, 50, 5);
}

sf::Sprite* Player::draw() {
    animspr->setPosition( *position );
    return animspr->draw();
}
