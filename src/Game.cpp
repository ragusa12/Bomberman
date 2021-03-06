#include "Game.h"

#include <iostream>

Game::Game( sf::RenderWindow* _window ) :
    window(_window) {

    for ( int i = 0; i < mapSize; i++ ) {
        gameMap.push_back( std::vector<int>() );
        for ( int j = 0; j < mapSize; j++ ) {
            if ( i == 0 || j == 0 || i == mapSize-1 || j == mapSize-1 )
                gameMap.at(i).push_back( STONE );
            else
                gameMap.at(i).push_back( EMPTY );
        }
    }
}

void Game::game_active() {

    std::vector<AnimatedSprite> player_sprs;
    player_sprs.push_back( *(new AnimatedSprite(window, "test.png", 50, 50, 1)) );

    Player player( player_sprs );
    player.setPosition( 100, 100 );

    while ( window->isOpen() ) {
        sf::Event e;
        while ( window->pollEvent(e) ) {
            if ( e.type == sf::Event::Closed )
                window->close();
        }
        window->clear();

        player.draw();

        window->display();

    }

}
