//
//  PositionConstraint.hpp
//  sutom-solver
//
//  Created by Stephen Jaud on 10/02/2022.
//

#ifndef PositionConstraint_hpp
#define PositionConstraint_hpp

#include "Constraint.hpp"

class PositionConstraint : public Constraint {
public:
    PositionConstraint(unsigned, char);
    
    virtual bool evaluate(std::string);
    
private:
    unsigned position;
    char letter;
};

#endif /* PositionConstraint_hpp */
