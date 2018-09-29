//
//  SLC.cpp
//  bbk7000
//
//  Created by Ethan Xie on 2015-11-26.
//  Copyright © 2015 Ethan Xie. All rights reserved.
//

#include "SLC.h"



SLC::SLC(std::string name):Building(name),Owener('K'),hasOwener(false){}

SLC::~SLC(){}

std::string SLC::getname(){
    return name;
}
char SLC::getOwner(){
    return Owener;
}
bool SLC::gethasOwener(){
    return false;
};

