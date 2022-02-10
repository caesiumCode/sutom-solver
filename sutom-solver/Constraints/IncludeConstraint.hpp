//
//  IncludeConstraint.hpp
//  sutom-solver
//
//  Created by Stephen Jaud on 10/02/2022.
//

#ifndef IncludeConstraint_hpp
#define IncludeConstraint_hpp

#include "Constraint.hpp"

class IncludeConstraint : public Constraint {
public:
    IncludeConstraint(char);
    
    virtual bool evaluate(std::string);
    
private:
    char letter;
};

#endif /* IncludeConstraint_hpp */
