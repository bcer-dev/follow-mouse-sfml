#include <iostream>
#include <SFML/Graphics.hpp>
#include <cmath>
#include "Arrow.hpp"
#include "Time.hpp"

inline double Rad2Deg(double radians)
{
    return radians * (180 / M_PI);
}

void RotateArrow(Arrow& arrow, const sf::RenderWindow& window)
{
    auto mousePos = sf::Mouse::getPosition(window);
    auto arrowPos = arrow.GetPosition();

    auto dx = mousePos.x - arrowPos.x;
    auto dy = mousePos.y - (arrowPos.y);
    auto angle = Rad2Deg(std::atan2(dy, dx));

    arrow.SetRotation(angle + 90);
}

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Rotations Simulation", sf::Style::Close);
    window.setVerticalSyncEnabled(true);

    Arrow arrow("Images/Arrow.png");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
                window.close();
                break;
            }
        }

        window.clear(sf::Color(39, 39, 39));

        RotateArrow(arrow, window);

        arrow.DrawTo(window);
        window.display();

        Time::UpdateDeltaTime();
    }

    return 0;
}