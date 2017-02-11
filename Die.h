//
//  Die.h
//  CS162_Lab1
//
//  Created by Vincent Lee on 9/29/15.
//  Defines a fair Die class
//

#ifndef __CS162_Lab1__Die__
#define __CS162_Lab1__Die__


class Die {

    private:
        int         numSides;
        int         rollsTaken;
        void        SetRandomSeed();

    
    public:
        Die();      ///default constructor initializes sides to 6
    
        Die        (int sides); //initializes sides to what user enters
    
        int        RollDie();
    
        int        GetSides();
    
};


#endif /* defined(__CS162_Lab1__Die__) */
