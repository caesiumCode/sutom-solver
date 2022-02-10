//
//  ExcludeConstraint.cpp
//  sutom-solver
//
//  Created by Stephen Jaud on 10/02/2022.
//

#include "ExcludeConstraint.hpp"

ExcludeConstraint::ExcludeConstraint(char l) {
    letter = l;
}

bool ExcludeConstraint::evaluate(std::string word) {
    for (char const &ch : word)
        if (ch == letter)
            return false;
    
    return true;
}
