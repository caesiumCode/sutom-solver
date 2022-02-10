//
//  LengthConstraint.cpp
//  sutom-solver
//
//  Created by Stephen Jaud on 10/02/2022.
//

#include "LengthConstraint.hpp"

LengthConstraint::LengthConstraint(unsigned l) {
    length = l;
}

bool LengthConstraint::evaluate(std::string word) {
    return word.size() == length;
}
