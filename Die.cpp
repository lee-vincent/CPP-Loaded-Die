//
//  Die.cpp
//  CS162_Lab1
//
//  Created by Vincent Lee on 9/29/15.
//  Implementation of the Die class
//

#include "Die.h"
#include <stdlib.h>
#include <time.h>

#define  MAX_SIDES 500


//create fair 6 sided Die object
Die::Die() {
    
    Die::SetRandomSeed();
    numSides = 6;
    rollsTaken = 0;
    
}


//create Die object with number of sides
Die::Die(int sides) {
    
    Die::SetRandomSeed();
    int lowerLimit = 1;
    
    //prevent illegal side selections
    if(sides <= lowerLimit || sides > MAX_SIDES) {
        numSides = 6;
    } else {
        numSides = sides;
    }
    rollsTaken = 0;
    
}


int Die::RollDie() {

    int result = rand() % numSides + 1;
    return result;
    
}


int Die::GetSides() {
    
    return numSides;
    
}


void Die::SetRandomSeed(){
    
    srand((unsigned)time(0));
    
}