//
//  OSAP.hpp
//  bbk7000
//
//  Created by Ethan Xie on 2015-11-26.
//  Copyright © 2015 Ethan Xie. All rights reserved.
//

#ifndef OSAP_H
#define OSAP_H
#include "building.h"

class OSAP:public Building{
    std::string name;
    char Owener;
    bool hasOwener;
public:
    OSAP(std::string name);
    ~OSAP();
    std::string getname();
    char getOwner();
    bool gethasOwener();
};



#endif 
