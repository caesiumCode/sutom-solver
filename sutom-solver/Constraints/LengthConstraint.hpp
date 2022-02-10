//
//  LengthConstraint.hpp
//  sutom-solver
//
//  Created by Stephen Jaud on 10/02/2022.
//

#ifndef LengthConstraint_hpp
#define LengthConstraint_hpp

#include "Constraint.hpp"

class LengthConstraint : public Constraint {
public:
    LengthConstraint(unsigned);
    
    virtual bool evaluate(std::string);
    
private:
    unsigned length;
};

#endif /* LengthConstraint_hpp */
