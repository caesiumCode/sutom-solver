//
//  ExcludeConstraint.hpp
//  sutom-solver
//
//  Created by Stephen Jaud on 10/02/2022.
//

#ifndef ExcludeConstraint_hpp
#define ExcludeConstraint_hpp

#include "Constraint.hpp"

class ExcludeConstraint : public Constraint {
public:
    ExcludeConstraint(char);
    
    virtual bool evaluate(std::string);
    
private:
    char letter;
};

#endif /* ExcludeConstraint_hpp */
