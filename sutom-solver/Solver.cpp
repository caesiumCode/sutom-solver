//
//  Solver.cpp
//  sutom-solver
//
//  Created by Stephen Jaud on 10/02/2022.
//

#include "Solver.hpp"

Solver::Solver() {
    reset();
}

void Solver::reset() {
    step = 0;
    load_dictionary();
    
    search_space = dictionary;
}

void Solver::initiate(unsigned word_size, char first_char) {
    addLengthConstraint(word_size);
    addPositionConstraint(0, first_char);
    
    step = 1;
}

void Solver::addLengthConstraint(unsigned length) {
    LengthConstraint constraint(length);
    constraints.push_back(&constraint);
}

void Solver::addPositionConstraint(unsigned position, char character) {
    PositionConstraint constraint(position, character);
    constraints.push_back(&constraint);
}

void Solver::addIncludeConstraint(char character) {
    IncludeConstraint constraint(character);
    constraints.push_back(&constraint);
}

void Solver::addExcludeConstraint(char character) {
    ExcludeConstraint constraint(character);
    constraints.push_back(&constraint);
}

void Solver::addWordConstraint(std::string word) {
    WordConstraint constraint(word);
    constraints.push_back(&constraint);
}

void Solver::apply_constraints() {
    std::vector<std::string> temporary_search_path;
    temporary_search_path.clear();
    
    for (std::string const &word : search_space) {
        bool accepted = true;
        
        for (Constraint* const &c : constraints)
            accepted = accepted && c->evaluate(word);
        
        if (accepted)   temporary_search_path.push_back(word);
    }
    
    search_space = temporary_search_path;
    
    constraints.clear();
}

void Solver::load_dictionary() {
    dictionary.clear();
    
    std::ifstream file("dic_fr.txt");
    if (file.is_open()) {
        std::string word;
        
        while (std::getline(file, word)) dictionary.push_back(word);
    }
    
    file.close();
}
