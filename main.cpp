//
//  main.cpp
//  CS162_Lab1
//
//  Created by Vincent Lee on 9/29/15.
//  Copyright (c) 2015 10k Bulbs. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include "Die.h"
#include "LoadedDie.h"

#define RESTART     true
#define END         false
#define MAX_SIDES   500

bool StartRolling(void);
void RollFair(int numSides, int numRolls);
void RollLoaded(int numSides, int numRolls);


int main() {
    
    return StartRolling();
    
}


bool StartRolling(void) {
    
    int numSides;
    std::cout << "Enter number of sides on die.\nRange is 2 - 500\nSides: ";
    std::cin >> numSides;
    
    if(numSides < 2 || numSides > MAX_SIDES) {
        std::cout << "Invalid Selection\n" << std::endl;
        return EXIT_FAILURE;
    }
    
    int numRolls;
    std::cout << "Enter number of rolls.\nMax 10,000\nRolls:";
    std::cin >> numRolls;
    
    if(numRolls < 0 || numRolls > 10000) {
        std::cout << "Invalid Selection\n" << std::endl;
        return EXIT_FAILURE;
    }
    
    char input;
    std::cout << "Enter \'F\' for Fair or \'L\' for Loaded: ";
    std::cin >> input;
    
    if(input=='f' || input=='F') {
        RollFair(numSides, numRolls);
    } else if(input=='l' || input=='L') {
        RollLoaded(numSides, numRolls);
    } else {
        std::cout << "Invalid Selection\n" << std::endl;
        return EXIT_FAILURE;
    }
    
    return EXIT_SUCCESS;

}




void RollFair(int numSides, int numRolls) {
    
    Die::Die die(numSides);
    int results[numSides + 1];
    
    for(int i = 0; i <= numSides; i++) {
        results[i] = 0;
    }
    
    for(int i = 0; i <= numSides; i++) {
        std::cout << results[i] << std::endl;
    }

    std::cout << "\n\nRolling Fair Die with " << numSides << " sides " << numRolls << " times." << std::endl;
    std::cout << "-----------------------" << std::endl;
    
    for(int i = 1; i <= numRolls; i++) {
        int rollResult = die.RollDie();
        ++results[rollResult];
        std::cout << "Roll " << i << ": " << rollResult << std::endl;
    }
    
    std::cout << "\n-----------------------\n\nResults:\n" << std::endl;
    //print results
    for(int i = 1; i <= die.GetSides(); i++) {
        std::cout << i << "'s Rolled: " << results[i] << '\n' << std::endl;
    }
    
}


void RollLoaded(int numSides, int numRolls) {
    
    LoadedDie::LoadedDie die(numSides);
    int results[numSides + 1];
    
    for(int i = 0; i <= numSides; i++) {
        results[i] = 0;
    }
    
    for(int i = 0; i <= numSides; i++) {
        std::cout << results[i] << std::endl;
    }
    
    std::cout << "\n\nRolling Loaded Die with " << numSides << " sides " << numRolls << " times." << std::endl;
    std::cout << "-----------------------" << std::endl;
    
    for(int i = 1; i <= numRolls; i++) {
        int rollResult = die.RollDie();
        ++results[rollResult];
        std::cout << "Roll " << i << ": " << rollResult << std::endl;
    }
    
    std::cout << "\n-----------------------\n\nResults:\n" << std::endl;
    //print results
    for(int i = 1; i <= die.GetSides(); i++) {
        std::cout << i << "'s Rolled: " << results[i] << '\n' << std::endl;
    }
    
}






