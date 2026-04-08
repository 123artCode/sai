#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    sf::Texture antTexture;

    if (!antTexture.loadFromFile("./res/cute_image.jpg"))
    {
        std::cout << "\033[31m \e[1m Warning: Because the idiot who coded this sh** failed everything breaks as you see. Please check the file path and complain to this dumb idiot about this sh**."<< std::endl;
        return -1;
    }
    sf::Sprite ant(antTexture);
    ant.setScale(0.1f, 0.1f);
    ant.setPosition(50.f, 50.f);



    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        ant.move(0.1f, 0.f);

        window.clear();
        window.draw(shape);
        window.draw(ant);
        window.display();
    }

    return 0;
}
