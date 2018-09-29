//
//  coopfee.hpp
//  bbk7000
//
//  Created by Ethan Xie on 2015-11-26.
//  Copyright © 2015 Ethan Xie. All rights reserved.
//

#ifndef COOPFEE_H
#define COOPFEE_H
#include "building.h"


class Coopfee:public Building{
    std::string name;
    char Owener;
    bool hasOwener;
public:
    Coopfee(std::string name);
    ~Coopfee();
    std::string getname();
    char getOwner();
    bool gethasOwener();
};

#endif

