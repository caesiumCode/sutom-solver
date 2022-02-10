//
//  Constraint.hpp
//  sutom-solver
//
//  Created by Stephen Jaud on 10/02/2022.
//

#ifndef Constraint_hpp
#define Constraint_hpp

#include <string>

class Constraint {
public:
    Constraint();
    
    virtual bool evaluate(std::string) = 0;
};

#endif /* Constraint_hpp */
