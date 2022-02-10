//
//  Program.hpp
//  sutom-solver
//
//  Created by Stephen Jaud on 10/02/2022.
//

#ifndef Program_hpp
#define Program_hpp

#include "SolverRender.hpp"

class Program {
public:
    Program(unsigned width = 2000, unsigned height = 1000);
    
    void run();
    
private:
    void handleEvents();
    
    const std::string TITLE = "SUTOM solver";
    const unsigned WIDTH, HEIGHT;
    
    sf::RenderWindow window;
    
    SolverRender solver;
};

#endif /* Program_hpp */
