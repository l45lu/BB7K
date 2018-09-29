//
//  dice.hpp
//  bbk7000
//
//  Created by Ethan Xie on 2015-11-24.
//  Copyright © 2015 Ethan Xie. All rights reserved.
//

#ifndef _DICE_H_
#define _DICE_H_
#include <stdlib.h>

class Dice{
public:
    int die1;
    int die2;
    int cups;
    int nh;
    int slc;
    Dice();
    void TDice();
    int Sum();
    void printDice();
    void rollDice();
    bool CheckDouble();
    int getCups();
    int getNh();
    int getSlc();
    int Dice1();
    int Dice2();
    ~Dice();
};


#endif
