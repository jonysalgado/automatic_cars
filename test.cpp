#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "source/constants.h"
#include <iostream>
using namespace constants;
using namespace sf;
int main()
{
    RenderWindow window(VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Automatic Cars");
    CircleShape shape(100.f);
    Music music;
    Image icon;
    Texture background;
    Texture pista;
    Sprite sprite;
    Sprite pSprite;
    if(!background.loadFromFile("../assets/star.png"))
        return EXIT_FAILURE;
    // std::cout << background.getSize().x;
    if(!pista.loadFromFile("../assets/pista.png"))
        return EXIT_FAILURE;
    pSprite.setTexture(pista);
    pSprite.setPosition(Vector2f(500, 0));
    pSprite.setScale(Vector2f(0.73, 0.73));
    sprite.setTexture(background);
    // sprite.setOrigin(SCREEN_WIDTH, SCREEN_HEIGHT);
    icon.loadFromFile("../assets/icon.png");
    window.setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());
    if(!music.openFromFile("../assets/lo-fi.ogg"))
        return EXIT_FAILURE;
    
    music.play();
    shape.setFillColor(Color::Green);
    window.setFramerateLimit(FREQUENCY);
    sprite.setScale(Vector2f(1.5,1.5));
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(sprite);
        window.draw(pSprite);
        // window.draw(shape);
        window.display();
    }

    return 0;
}