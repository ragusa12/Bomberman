#ifndef ANIMATEDSPRITE_H
#define ANIMATEDSPRITE_H

#include <string>
#include <vector>

#include <SFML/Graphics.hpp>

class AnimatedSprite
{
public:
    AnimatedSprite( sf::RenderWindow* _window, std::string src, int _w, int _h, int _fps );

    void setPosition( sf::Vector2f pos );

    void draw();

    int fps;

private:
    sf::Sprite sprite;
    sf::Texture texture;
    sf::RenderWindow* window = nullptr;

    sf::Clock* animationClock = nullptr;

    int w, h;

    int currentFrame = 0;
    int totalFrames;
};

#endif // ANIMATEDSPRITE_H
