//
//  Solver.hpp
//  sutom-solver
//
//  Created by Stephen Jaud on 10/02/2022.
//

#ifndef Solver_hpp
#define Solver_hpp

#include <iostream>

#include <fstream>
#include <sstream>
#include <vector>

#include "LengthConstraint.hpp"
#include "PositionConstraint.hpp"
#include "IncludeConstraint.hpp"
#include "ExcludeConstraint.hpp"
#include "WordConstraint.hpp"

class Solver {
public:
    Solver();
    
    void reset();
    void initiate(unsigned, char);
    
    void addLengthConstraint(unsigned);
    void addPositionConstraint(unsigned, char);
    void addIncludeConstraint(char);
    void addExcludeConstraint(char);
    void addWordConstraint(std::string);
    
private:
    void load_dictionary();
    void apply_constraints();
    
    std::vector<std::string> dictionary, search_space;
    std::vector<Constraint*> constraints;
    
    unsigned step;
};

#endif /* Solver_hpp */
