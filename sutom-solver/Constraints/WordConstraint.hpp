//
//  WordConstraint.hpp
//  sutom-solver
//
//  Created by Stephen Jaud on 10/02/2022.
//

#ifndef WordConstraint_hpp
#define WordConstraint_hpp

#include "Constraint.hpp"

class WordConstraint : public Constraint {
public:
    WordConstraint(std::string);
    
    virtual bool evaluate(std::string);
    
private:
    std::string word;
};

#endif /* WordConstraint_hpp */
