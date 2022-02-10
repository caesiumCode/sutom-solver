//
//  Program.cpp
//  sutom-solver
//
//  Created by Stephen Jaud on 10/02/2022.
//

#include "Program.hpp"

Program::Program(unsigned w, unsigned h)
: WIDTH(w)
, HEIGHT(h)
{
    window.create(sf::VideoMode(WIDTH, HEIGHT), TITLE);
    window.setFramerateLimit(30);
}

void Program::run() {
    while (window.isOpen()) {
        // Events
        handleEvents();
        
        // Rendering
        window.clear();
        window.draw(solver);
        window.display();
    }
}

void Program::handleEvents() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) window.close();
    }
}
