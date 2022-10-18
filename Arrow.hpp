#ifndef ARROW_HPP
#define ARROW_HPP

#include <SFML/Graphics.hpp>

#define SP_ARROW_WIDTH      36
#define SP_ARROW_HEIGHT     36

class Arrow
{
private:
    sf::Texture texture;
    sf::Sprite sprite;

public:
    explicit Arrow(const std::string& texturePath);
    void Rotate(float deg);
    void SetRotation(float deg);
    float GetRotation() const;
    sf::Vector2f GetPosition() const;
    void DrawTo(sf::RenderWindow& window) const;
};

#endif