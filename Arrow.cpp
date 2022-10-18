#include "Arrow.hpp"

Arrow::Arrow(const std::string& texturePath)
{
    if (!texture.loadFromFile(texturePath, sf::IntRect(0, 0, SP_ARROW_WIDTH, SP_ARROW_HEIGHT)))
        throw std::invalid_argument("texturePath");

    texture.setSmooth(true);
    
    sprite.setTexture(texture);
    auto bounds = sprite.getLocalBounds();

    sprite.setOrigin(bounds.width / 2, bounds.height / 2);
    sprite.setPosition(400, 300);
}

void Arrow::Rotate(float deg)
{
    sprite.rotate(deg);
}

void Arrow::SetRotation(float deg)
{
    sprite.setRotation(deg);
}

float Arrow::GetRotation() const
{
    return sprite.getRotation();
}

sf::Vector2f Arrow::GetPosition() const
{
    return sprite.getPosition();
}

void Arrow::DrawTo(sf::RenderWindow& window) const
{
    window.draw(sprite);
}
