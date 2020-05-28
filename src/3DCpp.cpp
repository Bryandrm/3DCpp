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
    // Initialize game objects
    while (window.isOpen()) {

        // Handle Keyboard Events
        // Update Game Objects
        // Render Game Objects

    }

    return 0;
}
