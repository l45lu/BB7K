//
//  dctimsline.hpp
//  bbk7000
//
//  Created by Ethan Xie on 2015-11-26.
//  Copyright © 2015 Ethan Xie. All rights reserved.
//

#ifndef DCTIMSLINE_H
#define DCTIMSLINE_H


#include "building.h"


class Dctimsline:public Building{
    std::string name;
    char Owener;
    bool hasOwener;
    //int improvement;
public:
    Dctimsline(std::string name);
    ~Dctimsline();
    std::string getname();
    char getOwner();
    bool gethasOwener();
};

#endif 
