//
//  PositionConstraint.cpp
//  sutom-solver
//
//  Created by Stephen Jaud on 10/02/2022.
//

#include "PositionConstraint.hpp"

PositionConstraint::PositionConstraint(unsigned p, char l) {
    position = p;
    letter = l;
}

bool PositionConstraint::evaluate(std::string word) {
    return (position < word.size()) && (word[position] == letter);
}
