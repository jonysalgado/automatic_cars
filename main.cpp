#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "source/constants.h"
using namespace sf;
int main()
{
    RenderWindow window(VideoMode(
        constants::SCREEN_WIDTH, 
        constants::SCREEN_HEIGHT), 
        "Automatic Cars");
    
    Music music;
    Image icon;
    Texture background;
    Texture pista;
    Sprite backSprite;
    Sprite pistaSprite;
    
    if(!music.openFromFile("../assets/lo-fi.ogg"))
        return EXIT_FAILURE;
    if(!background.loadFromFile("../assets/star.png"))
        return EXIT_FAILURE;
    if(!icon.loadFromFile("../assets/icon.png"))
        return EXIT_FAILURE;
    if(!pista.loadFromFile("../assets/pista.png"))
        return EXIT_FAILURE;

    window.setIcon(
        icon.getSize().x, 
        icon.getSize().y, 
        icon.getPixelsPtr());
    pistaSprite.setTexture(pista);
    pistaSprite.setPosition(Vector2f(500, 0));
    pistaSprite.setScale(Vector2f(0.73, 0.73));
    backSprite.setScale(Vector2f(1.5,1.5));
    window.setFramerateLimit(constants::FREQUENCY);

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(backSprite);
        window.draw(pistaSprite);
        window.display();
    }

    return 0;
}