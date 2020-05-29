// Copyright 2020 - Kevin Rivera @kevinrev26
#include <iostream>
#include <SFML/Graphics.hpp>
// Size of the window
sf::Vector2f viewSize(1024, 768);
// Setting the size of the window
sf::VideoMode vm(viewSize.x, viewSize.y);
// Define a default view window
sf::RenderWindow window(vm, "Hello World", sf::Style::Default);
// Textures and sprites objects
sf::Texture skyTexture;
sf::Sprite skySprite;

// Initialization function
void init() {
    // Load Sky Texture
    skyTexture.loadFromFile("Assets/graphics/sky.png");
    // Attach Texture
    skySprite.setTexture(skyTexture);
}

// Drawing function
void draw() {
    window.draw(skySprite);
}

int main(int argc, char **argv) {
    //
    std::cout << "Starting rendering!\n";
    // Initialize game objects
    init();
    sf::Vector2f origin = skySprite.getOrigin();
    std::cout << origin.x;
    while (window.isOpen()) {
        // Handle Keyboard Events
        // Update Game Objects
        window.clear(sf::Color::Red);
        // Render Game Objects
        draw();
        window.display();
    }

    return 0;
}
