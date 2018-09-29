//
//  OSAP.cpp
//  bbk7000
//
//  Created by Ethan Xie on 2015-11-26.
//  Copyright © 2015 Ethan Xie. All rights reserved.
//

#include "OSAP.h"

OSAP::OSAP(std::string name):Building(name){
    Owener='K';
    hasOwener=false;
}

OSAP::~OSAP(){}

std::string OSAP::getname(){
    return name;
}
char OSAP::getOwner(){
    return Owener;
}
bool OSAP::gethasOwener(){
    return false;
};

