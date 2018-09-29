//
//  tuition.cpp
//  bbk7000
//
//  Created by Ethan Xie on 2015-11-26.
//  Copyright © 2015 Ethan Xie. All rights reserved.
//

#include "tuition.h"


Tuition::Tuition(std::string name):Building(name),Owener('K'),hasOwener(false){}

Tuition::~Tuition(){}

std::string Tuition::getname(){
    return name;
}

char Tuition::getOwner(){
    return Owener;
}
bool Tuition::gethasOwener(){
    return false;
};

