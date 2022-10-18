#ifndef TIME_HPP
#define TIME_HPP

#include <SFML/Graphics.hpp>

class Time
{
private:
    static double deltaTime;
    static sf::Clock clock;

public:
    static void UpdateDeltaTime();
    static double DeltaTime();
};

#endif