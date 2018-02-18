#ifndef SPRITECONTROLLER_H
#define SPRITECONTROLLER_H

#include "AnimatedSprite.h"

class SpriteController
{
public:
    SpriteController( std::vector<AnimatedSprite> _anim_sprs );

    void drawCurrent();

    void setPositionCurrent( sf::Vector2f pos );

    int currentSprite = 0;
    int totalSprites;

private:
    std::vector<AnimatedSprite> animatedSprites;
};

#endif // SPRITECONTROLLER_H
