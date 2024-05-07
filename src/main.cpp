#include <SFML/Graphics.hpp>

int main()
{
    auto window = sf::RenderWindow{ { 1920u, 1080u }, "Point Charge", sf::Style::Default};
    window.setFramerateLimit(144);

    while (window.isOpen())
    {
        for (auto event = sf::Event{}; window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
        sf::CircleShape pC(50.f);
        pC.setOrigin(pC.getRadius(), pC.getRadius());
        pC.setFillColor(sf::Color(97, 141, 212));
        sf::Vector2f winSize(window.getSize());
        sf::Vector2f center(winSize/2.f);
        pC.setPosition(center);
        window.clear(sf::Color::White);
        window.draw(pC);
        window.display();
    }
}