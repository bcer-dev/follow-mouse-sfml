#include "Time.hpp"

sf::Clock Time::clock {};
double Time::deltaTime = 0;

void Time::UpdateDeltaTime()
{
    deltaTime = clock.restart().asSeconds();
}

double Time::DeltaTime()
{
    return deltaTime;
}