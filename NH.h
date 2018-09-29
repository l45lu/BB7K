//
//  NH.hpp
//  bbk7000
//
//  Created by Ethan Xie on 2015-11-26.
//  Copyright © 2015 Ethan Xie. All rights reserved.
//

#ifndef NH_H
#define NH_H

#include "building.h"


class NH:public Building{
    std::string name;
    char Owener;
    bool hasOwener;
public:
    NH(std::string name);
    ~NH();
    std::string getname();
    char getOwner();
    bool gethasOwener();
};


#endif

