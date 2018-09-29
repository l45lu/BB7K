//
//  gyms.hpp
//  bbk7000
//
//  Created by Ethan Xie on 2015-11-26.
//  Copyright © 2015 Ethan Xie. All rights reserved.
//

#ifndef GYMS_H
#define GYMS_H
#include "building.h"
#include "dice.h"
#include <string>

class Gym:public Building{
    std::string name;
    char Owener;
    bool hasOwener;
    bool ismortgage;
    int improvement;
    //
    std::string ows;
public:
    Gym(std::string name);
    ~Gym();
    char getOwner();
    bool gethasOwener();
    std::string getname();
    void changemortgate(bool tf);
    bool getmortgage();
    //
    void sethasOwener(bool x);
    
    void changehasOwener();
    std::string getows();
    void setows(std::string n);
    void changeOwner(char n);
    int GetPurchaseCost();
    int getimprovement();
    void setimprovement();
    void setRimprovement(int n);

};


#endif
