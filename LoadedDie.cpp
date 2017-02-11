//
//  LoadedDie.cpp
//  CS162_Lab1
//
//  Created by Vincent Lee on 9/29/15.
//  Implementation of the Loaded Die class
//

#include "LoadedDie.h"
#include <stdlib.h>
#include <time.h>

#define  MAX_SIDES 500

//creates fair 6 sided Die object
LoadedDie::LoadedDie() {
    
    SetRandomSeed();
    numSides = 6;
    rollsTaken = 0;
    
}


//create Die object with number of sides
LoadedDie::LoadedDie(int sides) {
    
    SetRandomSeed();
    int lowerLimit = 1;
    
    //prevent illegal side selections
    if(sides <= lowerLimit || sides > MAX_SIDES) {
        numSides = 6;
    } else {
        numSides = sides;
    }
        rollsTaken = 0;
    
}


int LoadedDie::RollDie() {

    int result = rand() % numSides + 1;
    
    //if in bottom half of range, 50% chance to re-roll
    if(result < numSides / 2) {
        if(rand() / (float)RAND_MAX >= .5f) {
            result = RollDie();
        }
    }
    
    return result;
    
}


int LoadedDie::GetSides() {
    
    return numSides;
    
}

void LoadedDie::SetRandomSeed(){
    
    srand((unsigned)time(0));
    
}