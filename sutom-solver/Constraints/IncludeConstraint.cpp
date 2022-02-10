//
//  IncludeConstraint.cpp
//  sutom-solver
//
//  Created by Stephen Jaud on 10/02/2022.
//

#include "IncludeConstraint.hpp"

IncludeConstraint::IncludeConstraint(char l) {
    letter = l;
}

bool IncludeConstraint::evaluate(std::string word) {
    for (char const &ch : word)
        if (ch == letter)
            return true;
    
    return false;
}
