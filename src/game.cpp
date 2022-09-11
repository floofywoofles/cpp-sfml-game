#include <SFML/Graphics.hpp>

int SCREEN_WIDTH = 1366;
int SCREEN_HEIGHT = 768;
float GROUND = SCREEN_HEIGHT/6;

int main()
{
    sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH,SCREEN_HEIGHT), "SFML works!");
    sf::CircleShape shape(100.f);
    int x = 50;
    int y = 50;
    
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        shape.setPosition(x,y);
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            x -= 1;
        } else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
            x += 1;
        } else {
            if(y < GROUND){
                y+=1;
            } else {
                y = GROUND;
            }
        }
    }

    return 0;
}