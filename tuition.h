//
//  tuition.hpp
//  bbk7000
//
//  Created by Ethan Xie on 2015-11-26.
//  Copyright © 2015 Ethan Xie. All rights reserved.
//

#ifndef TUITION_H
#define TUITION_H


#include "building.h"


class Tuition:public Building{
    std::string name;
    char Owener;
    bool hasOwener;
public:
    Tuition(std::string name);
    ~Tuition();
    std::string getname();
    char getOwner();
    bool gethasOwener();
};



#endif 
