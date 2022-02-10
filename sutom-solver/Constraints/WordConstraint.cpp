//
//  WordConstraint.cpp
//  sutom-solver
//
//  Created by Stephen Jaud on 10/02/2022.
//

#include "WordConstraint.hpp"

WordConstraint::WordConstraint(std::string w) {
    word = w;
}

bool WordConstraint::evaluate(std::string w) {
    return !word.compare(w);
}
