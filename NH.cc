//
//  NH.cpp
//  bbk7000
//
//  Created by Ethan Xie on 2015-11-26.
//  Copyright © 2015 Ethan Xie. All rights reserved.
//

#include "NH.h"

NH::NH(std::string name):Building(name),Owener('K'),hasOwener(false){}

NH::~NH(){}

std::string NH::getname(){
    return name;
}

char NH::getOwner(){
    return Owener;
}
bool NH::gethasOwener(){
    return false;
};

