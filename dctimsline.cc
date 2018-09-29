//
//  dctimsline.cpp
//  bbk7000
//
//  Created by Ethan Xie on 2015-11-26.
//  Copyright © 2015 Ethan Xie. All rights reserved.
//

#include "dctimsline.h"



Dctimsline::Dctimsline(std::string name):Building(name),hasOwener(false),Owener('K'){}

Dctimsline::~Dctimsline(){}

std::string Dctimsline::getname(){
    return name;
}

char Dctimsline::getOwner(){
    return Owener;
}
bool Dctimsline::gethasOwener(){
    return false;
};



