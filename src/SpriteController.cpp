#include "SpriteController.h"

SpriteController::SpriteController( std::vector<AnimatedSprite> _anim_sprs ) :
    animatedSprites(_anim_sprs){
    totalSprites = animatedSprites.size();
}

void SpriteController::setPositionCurrent( sf::Vector2f pos ) {
    animatedSprites.at(currentSprite).setPosition( pos );
}

void SpriteController::drawCurrent() {
    animatedSprites.at(currentSprite).draw();
}
