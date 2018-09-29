//
//  gototim.cpp
//  bbk7000
//
//  Created by Ethan Xie on 2015-11-26.
//  Copyright © 2015 Ethan Xie. All rights reserved.
//

#include "gototim.h"

Gototim::Gototim(std::string name):Building(name),Owener('K'),hasOwener(false){}

Gototim::~Gototim(){}

std::string Gototim::getname(){
    return name;
}

char Gototim::getOwner(){
    return Owener;
}
bool Gototim::gethasOwener(){
    return false;
};

