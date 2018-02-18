#include "AnimatedSprite.h"

#include <iostream>

AnimatedSprite::AnimatedSprite( sf::RenderWindow* _window, std::string src, int _w, int _h, int _fps ) :
window(_window), w(_w), h(_h), fps(_fps) {

    sf::Image img;
    if (!img.loadFromFile(src) )
        std::cerr << "Error loading image: " << src << std::endl;

    totalFrames = img.getSize().x / w;

    if ( !texture.loadFromImage( img ) )
        std::cerr << "Error loading texture: " << src << std::endl;

    sprite.setTexture( texture );

    animationClock = new sf::Clock;
}

void AnimatedSprite::setPosition( sf::Vector2f pos ) {
    sprite.setPosition(pos);
}

void AnimatedSprite::draw() {

    int deltaFrame = (int) ((double) animationClock->getElapsedTime().asSeconds() / ((double)1/fps));
    if ( deltaFrame > 0 ) {
        currentFrame += deltaFrame;
        animationClock->restart();
    }
    if ( currentFrame >= totalFrames )
        currentFrame = 0;

    sprite.setTextureRect( sf::IntRect( currentFrame * w, 0, w, h) );

    window->draw( sprite );
}
