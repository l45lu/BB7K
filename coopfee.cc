//
//  coopfee.cpp
//  bbk7000
//
//  Created by Ethan Xie on 2015-11-26.
//  Copyright © 2015 Ethan Xie. All rights reserved.
//

#include "coopfee.h"


Coopfee::Coopfee(std::string name):Building(name),Owener('K'),hasOwener(false){}

Coopfee::~Coopfee(){}

std::string Coopfee::getname(){
    return name;
}
char Coopfee::getOwner(){
    return Owener;
}
bool Coopfee::gethasOwener(){
    return false;
};

