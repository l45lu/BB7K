//
//  goose.hpp
//  bbk7000
//
//  Created by Ethan Xie on 2015-11-26.
//  Copyright © 2015 Ethan Xie. All rights reserved.
//

#ifndef GOOSE_H
#define GOOSE_H

#include "building.h"


class Goose:public Building{
    std::string name;
    char Owener;
    bool hasOwener;
public:
    Goose(std::string name);
    ~Goose();
    std::string getname();
    char getOwner();
    bool gethasOwener();
};


#endif 
