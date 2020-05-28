// Copyright 2020 - Kevin Rivera @kevinrev26

#include <iostream>
#include <SFML/Graphics.hpp>

// Size of the window
sf::Vector2f viewSize(1024, 768);
// Setting the size of the window
sf::VideoMode vm(viewSize.x, viewSize.y);
// Define a default view window
sf::RenderWindow window(vm, "Hello World", sf::Style::Default);


int main(int argc, char **argv) {
    // Setting a rectangle
    sf::RectangleShape rectangle(sf::Vector2f(500.0f, 300.0f));
    rectangle.setFillColor(sf::Color::Magenta);
    rectangle.setPosition(viewSize.x/2, viewSize.y/2);
    rectangle.setOrigin(sf::Vector2f(
        rectangle.getSize().x/2,
        rectangle.getSize().y/2));
    std::cout << "Starting rendering!\n";
    // Initialize game objects
    while (window.isOpen()) {
        // Handle Keyboard Events
        // Update Game Objects
        window.clear(sf::Color::Red);
        // Render Game Objects
        window.draw(rectangle);
        window.display();
    }

    return 0;
}
