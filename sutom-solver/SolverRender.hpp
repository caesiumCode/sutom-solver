//
//  SolverRender.hpp
//  sutom-solver
//
//  Created by Stephen Jaud on 10/02/2022.
//

#ifndef SolverRender_hpp
#define SolverRender_hpp

#include <SFML/Graphics.hpp>
#include "Solver.hpp"

class SolverRender : public Solver, public sf::Drawable {
public:
    SolverRender();
private:
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

#endif /* SolverRender_hpp */
