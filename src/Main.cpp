#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    sf::Texture antTexture;
    if (!antTexture.loadFromFile("ant.png"))
    {
        std::cerr << "Warning: Because the idiot who coded this sh** failed everything breaks as you see. Please check the file path and complain to this dumb idiot about this sh**." << std::endl;
        return -1;
    }
    sf::Sprite ant(antTexture);



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
        window.draw(ant);
        window.display();
    }

    return 0;
}
