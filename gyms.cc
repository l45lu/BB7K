//
//  gyms.cpp
//  bbk7000
//
//  Created by Ethan Xie on 2015-11-26.
//  Copyright © 2015 Ethan Xie. All rights reserved.
//

#include "gyms.h"

using namespace std;

Gym::Gym(string name):Building(name),hasOwener(false),ismortgage(false),improvement(0),ows(""),Owener('K'){}

Gym::~Gym(){}

char Gym::getOwner(){
    return Owener;
}

bool Gym::gethasOwener(){
    return hasOwener;
}

string Gym::getname(){
    return name;
}

bool Gym::getmortgage(){
    return ismortgage;
}

void Gym::changemortgate(bool tf){
    ismortgage=tf;
}

string Gym::getows(){
    return ows;
}

void Gym::setows(string n){
    ows=n;
}

void Gym::changeOwner(char n){
    Owener=n;
}
void Gym::changehasOwener(){
    if (hasOwener == true) {
        hasOwener = false;
    }else{
        hasOwener = true;
    }
}


void Gym::sethasOwener(bool x){
    hasOwener = x;
}

int Gym::GetPurchaseCost(){
    return 150;
}

int Gym::getimprovement(){
    return improvement;
}

void Gym::setimprovement(){
    improvement=0;
}


void Gym::setRimprovement(int n){
    improvement=n;
}


