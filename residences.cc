//
//  residences.cpp
//  bbk7000
//
//  Created by Ethan Xie on 2015-11-26.
//  Copyright © 2015 Ethan Xie. All rights reserved.
//

#include "residences.h"

using namespace std;

Residence::Residence(string name):Building(name),Owener('K'),hasOwener(false),ismortgaed(false),improvement(0),ows(""){}

Residence::~Residence(){}

char Residence::getOwner(){
    return Owener;
}

bool Residence::gethasOwener(){
    return hasOwener;
}

string Residence::getname(){
    return name;
}

bool Residence::getmortgate(){
    return ismortgaed;
}

void Residence::changemortgate(bool tf){
    ismortgaed=tf;
}

string Residence::getows(){
    return ows;
}

void Residence::setows(string n){
    ows=n;
}


void Residence::changeOwner(char n){
    Owener=n;
}

void Residence::changehasOwener(){
    if (hasOwener == true) {
        hasOwener = false;
    }else{
        hasOwener = true;
    }
}

void Residence::sethasOwener(bool x) {
    hasOwener = x;
}

int Residence::GetPurchaseCost(){
    return 200;
}


int Residence::getimprovement(){
    return improvement;
}

void Residence::setimprovement(){
    improvement=0;
}

void Residence::setRimprovement(int n){
    improvement=n;
}





