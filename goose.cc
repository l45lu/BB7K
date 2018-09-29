//
//  goose.cpp
//  bbk7000
//
//  Created by Ethan Xie on 2015-11-26.
//  Copyright © 2015 Ethan Xie. All rights reserved.
//

#include "goose.h"

Goose::Goose(std::string name):Building(name),Owener('K'),hasOwener(false){}

Goose::~Goose(){}

std::string Goose::getname(){
    return name;
}

char Goose::getOwner(){
    return Owener;
}
bool Goose::gethasOwener(){
    return false;
};

