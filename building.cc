//
//  building.cpp
//  bbk7000
//
//  Created by Ethan Xie on 2015-11-24.
//  Copyright © 2015 Ethan Xie. All rights reserved.
//

#include "building.h"

Building::Building(std::string name):name(name){}

Building::~Building(){}

std::string Building::getname(){
    return name;
}

/*char Building::getOwner(){
 return Owener;
 }
 
 */

//bool Building::gethasOwener(){return 0;}

//void Building::changehasOwner(){}

//void Building::setOwner(char ){}
void Building::sethasOwener(bool x){}
int Building::GetLevel(){
    return 0;
}
void Building::changelevel(int lv){}
bool Building::Getismonoply(){
    return 0;
}
bool Building::getmortgate(){
    return 0;
}
//void Building::changemortgage(){}

int Building::GetImproveCost(){return 0;}

int Building::GetPurchaseCost(){return 0;}
//bool Building::getmortgate(){return 0;}

void Building::changemortgate(bool tf){}

int Building::getimprovement(){
    return 0;
}

//

void Building::setimprovement(){}

int Building::GetTuitionWImprove(){
    return 0;
}

void Building::setmonopoly(bool n){}

void Building::changehasOwener(){};

void Building::setows(std::string n){}

void Building::setLevel(int l){}

void Building::changeOwner(char n){}

std::string Building::getows(){return 0;}


void Building::setRimprovement(int n){}

