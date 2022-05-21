#include <SFML/Graphics.hpp>
#include "../include/GameInformation.hpp"

int main()
{
    GameInformation *gGameInformation = new GameInformation(1920, 1080, "Cryoengine [V0.1]");
    sf::RenderWindow window(sf::VideoMode(gGameInformation->GetScreenWidth(), gGameInformation->GetScreenHeight()),
                             gGameInformation->GetAppTitle());
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}