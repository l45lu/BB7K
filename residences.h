//
//  residences.hpp
//  bbk7000
//
//  Created by Ethan Xie on 2015-11-26.
//  Copyright © 2015 Ethan Xie. All rights reserved.
//

#ifndef RESIDENCES_H
#define RESIDENCES_H
#include "building.h"

class Residence:public Building{
    std::string name;
    char Owener;
    bool hasOwener;
    bool ismortgaed;
    int improvement;
    std::string ows;
public:
    Residence(std::string name);
    ~Residence();
    char getOwner();
    bool gethasOwener();
    std::string getname();
    bool getmortgate();
    void changemortgate(bool tf);
    void changehasOwener();
    std::string getows();
    void setows(std::string n);
    void changeOwner(char n);
    void sethasOwener(bool x);
    int GetPurchaseCost();
    int getimprovement();
    void setimprovement();
    void setRimprovement(int n);
};


#endif


