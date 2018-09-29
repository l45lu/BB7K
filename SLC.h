//
//  SLC.hpp
//  bbk7000
//
//  Created by Ethan Xie on 2015-11-26.
//  Copyright © 2015 Ethan Xie. All rights reserved.
//

#ifndef SLC_H
#define SLC_H


#include "building.h"


class SLC:public Building{
    std::string name;
    char Owener;
    bool hasOwener;
public:
    SLC(std::string name);
    ~SLC();
    std::string getname();
    char getOwner();
    bool gethasOwener();
};


#endif


