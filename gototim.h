//
//  gototim.hpp
//  bbk7000
//
//  Created by Ethan Xie on 2015-11-26.
//  Copyright © 2015 Ethan Xie. All rights reserved.
//

#ifndef GOTOTIM_H
#define GOTOTIM_H


#include "building.h"


class Gototim:public Building{
    std::string name;
    char Owener;
    bool hasOwener;
public:
    Gototim(std::string name);
    ~Gototim();
    std::string getname();
    char getOwner();
    bool gethasOwener();
};

#endif 
