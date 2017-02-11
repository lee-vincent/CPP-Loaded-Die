//
//  LoadedDie.h
//  CS162_Lab1
//
//  Created by Vincent Lee on 10/1/15.
//  Defines a fair Loaded Die class
//

#ifndef __CS162_Lab1__LoadedDie__
#define __CS162_Lab1__LoadedDie__

class LoadedDie {
    
    private:
        int             numSides;
        int             rollsTaken;
        void            SetRandomSeed();
        
        
    public:
        LoadedDie();    //default constructor initializes sides to 6
        
        LoadedDie       (int sides); //initializes sides to what user enters
        
        int             RollDie();
        
        int             GetSides();
    
};

#endif /* defined(__CS162_Lab1__LoadedDie__) */
