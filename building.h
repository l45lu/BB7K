//
//  building.hpp
//  bbk7000
//
//  Created by Ethan Xie on 2015-11-24.
//  Copyright © 2015 Ethan Xie. All rights reserved.
//

#ifndef BUILDING_H
#define BUILDING_H
#include "player.h"
#include <stdbool.h>
#include <stdlib.h>
#include <string>

class Building {
    //std::string name;
    char Owener;
    std::string owname;
    bool hasOwener;
public:
    std::string name;
    Building(std::string name);
    virtual ~Building()=0;
    std::string getname();
    virtual char getOwner()=0;
    virtual bool gethasOwener()=0;
    virtual void changehasOwener();
    //virtual void setOwner(std::string n);
    virtual void sethasOwener(bool x);
    virtual int GetLevel();
    virtual void changelevel(int lv);
    virtual bool Getismonoply();
    virtual bool getmortgate();
    //virtual void changemortgage();
    virtual int GetImproveCost();
    virtual int GetPurchaseCost();
    virtual void changemortgate(bool tf);
    virtual int getimprovement();
    virtual std::string getows();
    virtual void setows(std::string n);
    virtual void setLevel(int l);
    virtual void changeOwner(char n);
    virtual void setmonopoly(bool n);
    virtual int GetTuitionWImprove();
    virtual void setimprovement();
    virtual void setRimprovement(int n);
};



#endif
