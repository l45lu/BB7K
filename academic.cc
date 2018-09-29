//
//  academic.cpp
//  bbk7000
//
//  Created by Ethan Xie on 2015-11-24.
//  Copyright © 2015 Ethan Xie. All rights reserved.

#include "academic.h"
#include <iostream>
using namespace std;

Academic:: Academic(string name):Building(name),Level(0),Owener('K'),hasOwener(false),ismonopoly(false),ismortgate(false),ows(""){
    if (name == "AL") {
        MonopolyBlock = "Arts1";
        PurchaseCost = 40;
        ImproveCost = 50;
        TuitionWImprove[0] = 2;
        TuitionWImprove[1] = 10;
        TuitionWImprove[2] = 30;
        TuitionWImprove[3] = 90;
        TuitionWImprove[4] = 160;
        TuitionWImprove[5] = 250;
    }else if (name == "ML") {
        MonopolyBlock = "Arts1";
        PurchaseCost = 60;
        ImproveCost = 50;
        TuitionWImprove[0] = 4;
        TuitionWImprove[1] = 20;
        TuitionWImprove[2] = 60;
        TuitionWImprove[3] = 180;
        TuitionWImprove[4] = 320;
        TuitionWImprove[5] = 450;
    }else if (name == "ECH") {
        MonopolyBlock = "Arts2";
        PurchaseCost = 100;
        ImproveCost = 50;
        TuitionWImprove[0] = 6;
        TuitionWImprove[1] = 30;
        TuitionWImprove[2] = 90;
        TuitionWImprove[3] = 270;
        TuitionWImprove[4] = 400;
        TuitionWImprove[5] = 550;
    }else if (name == "PAS") {
        MonopolyBlock = "Arts2";
        PurchaseCost = 100;
        ImproveCost = 50;
        TuitionWImprove[0] = 6;
        TuitionWImprove[1] = 30;
        TuitionWImprove[2] = 90;
        TuitionWImprove[3] = 270;
        TuitionWImprove[4] = 400;
        TuitionWImprove[5] = 550;
    }else if (name == "HH") {
        MonopolyBlock = "Arts2";
        PurchaseCost = 120;
        ImproveCost = 50;
        TuitionWImprove[0] = 8;
        TuitionWImprove[1] = 40;
        TuitionWImprove[2] = 100;
        TuitionWImprove[3] = 300;
        TuitionWImprove[4] = 450;
        TuitionWImprove[5] = 600;
    }else if (name == "RCH") {
        MonopolyBlock = "Eng";
        PurchaseCost = 140;
        ImproveCost = 100;
        TuitionWImprove[0] = 10;
        TuitionWImprove[1] = 50;
        TuitionWImprove[2] = 150;
        TuitionWImprove[3] = 450;
        TuitionWImprove[4] = 625;
        TuitionWImprove[5] = 750;
    }else if (name == "DWE") {
        MonopolyBlock = "Eng";
        PurchaseCost = 140;
        ImproveCost = 100;
        TuitionWImprove[0] = 10;
        TuitionWImprove[1] = 50;
        TuitionWImprove[2] = 150;
        TuitionWImprove[3] = 450;
        TuitionWImprove[4] = 625;
        TuitionWImprove[5] = 750;
    }else if (name == "CPH") {
        MonopolyBlock = "Eng";
        PurchaseCost = 160;
        ImproveCost = 100;
        TuitionWImprove[0] = 12;
        TuitionWImprove[1] = 60;
        TuitionWImprove[2] = 180;
        TuitionWImprove[3] = 500;
        TuitionWImprove[4] = 700;
        TuitionWImprove[5] = 900;
    }else if (name == "LHI") {
        MonopolyBlock = "Health";
        PurchaseCost = 180;
        ImproveCost = 100;
        TuitionWImprove[0] = 14;
        TuitionWImprove[1] = 70;
        TuitionWImprove[2] = 200;
        TuitionWImprove[3] = 550;
        TuitionWImprove[4] = 750;
        TuitionWImprove[5] = 950;
    }else if (name == "BMH") {
        MonopolyBlock = "Health";
        PurchaseCost = 180;
        ImproveCost = 100;
        TuitionWImprove[0] = 14;
        TuitionWImprove[1] = 70;
        TuitionWImprove[2] = 200;
        TuitionWImprove[3] = 550;
        TuitionWImprove[4] = 750;
        TuitionWImprove[5] = 950;
    }else if (name == "OPT") {
        MonopolyBlock = "Health";
        PurchaseCost = 200;
        ImproveCost = 100;
        TuitionWImprove[0] = 16;
        TuitionWImprove[1] = 80;
        TuitionWImprove[2] = 220;
        TuitionWImprove[3] = 600;
        TuitionWImprove[4] = 800;
        TuitionWImprove[5] = 1000;
    }else if (name == "EV1") {
        MonopolyBlock = "Env";
        PurchaseCost = 220;
        ImproveCost = 150;
        TuitionWImprove[0] = 18;
        TuitionWImprove[1] = 90;
        TuitionWImprove[2] = 250;
        TuitionWImprove[3] = 700;
        TuitionWImprove[4] = 875;
        TuitionWImprove[5] = 1050;
    }else if (name == "EV2") {
        MonopolyBlock = "Env";
        PurchaseCost = 220;
        ImproveCost = 150;
        TuitionWImprove[0] = 18;
        TuitionWImprove[1] = 90;
        TuitionWImprove[2] = 250;
        TuitionWImprove[3] = 700;
        TuitionWImprove[4] = 875;
        TuitionWImprove[5] = 1050;
    }else if (name == "EV3") {
        MonopolyBlock = "Env";
        PurchaseCost = 240;
        ImproveCost = 150;
        TuitionWImprove[0] = 20;
        TuitionWImprove[1] = 100;
        TuitionWImprove[2] = 300;
        TuitionWImprove[3] = 750;
        TuitionWImprove[4] = 925;
        TuitionWImprove[5] = 1100;
    }else if (name == "PHYS") {
        MonopolyBlock = "Sci1";
        PurchaseCost = 260;
        ImproveCost = 150;
        TuitionWImprove[0] = 22;
        TuitionWImprove[1] = 110;
        TuitionWImprove[2] = 330;
        TuitionWImprove[3] = 800;
        TuitionWImprove[4] = 975;
        TuitionWImprove[5] = 1150;
    }else if (name == "B1") {
        MonopolyBlock = "Sci1";
        PurchaseCost = 260;
        ImproveCost = 150;
        TuitionWImprove[0] = 22;
        TuitionWImprove[1] = 110;
        TuitionWImprove[2] = 330;
        TuitionWImprove[3] = 800;
        TuitionWImprove[4] = 975;
        TuitionWImprove[5] = 1150;
    }else if (name == "B2") {
        MonopolyBlock = "Sci1";
        PurchaseCost = 280;
        ImproveCost = 150;
        TuitionWImprove[0] = 24;
        TuitionWImprove[1] = 120;
        TuitionWImprove[2] = 360;
        TuitionWImprove[3] = 850;
        TuitionWImprove[4] = 1025;
        TuitionWImprove[5] = 1200;
    }else if (name == "EIT") {
        MonopolyBlock = "Sci2";
        PurchaseCost = 300;
        ImproveCost = 200;
        TuitionWImprove[0] = 26;
        TuitionWImprove[1] = 130;
        TuitionWImprove[2] = 390;
        TuitionWImprove[3] = 900;
        TuitionWImprove[4] = 1100;
        TuitionWImprove[5] = 1275;
    }else if (name == "ESC") {
        MonopolyBlock = "Sci2";
        PurchaseCost = 300;
        ImproveCost = 200;
        TuitionWImprove[0] = 26;
        TuitionWImprove[1] = 130;
        TuitionWImprove[2] = 390;
        TuitionWImprove[3] = 900;
        TuitionWImprove[4] = 1100;
        TuitionWImprove[5] = 1275;
    }else if (name == "C2") {
        MonopolyBlock = "Sci2";
        PurchaseCost = 320;
        ImproveCost = 200;
        TuitionWImprove[0] = 28;
        TuitionWImprove[1] = 150;
        TuitionWImprove[2] = 450;
        TuitionWImprove[3] = 1000;
        TuitionWImprove[4] = 1200;
        TuitionWImprove[5] = 1400;
    }else if (name == "MC") {
        MonopolyBlock = "Math";
        PurchaseCost = 350;
        ImproveCost = 200;
        TuitionWImprove[0] = 35;
        TuitionWImprove[1] = 175;
        TuitionWImprove[2] = 500;
        TuitionWImprove[3] = 1100;
        TuitionWImprove[4] = 1300;
        TuitionWImprove[5] = 1500;
    }else if (name == "DC") {
        MonopolyBlock = "Math";
        PurchaseCost = 400;
        ImproveCost = 200;
        TuitionWImprove[0] = 50;
        TuitionWImprove[1] = 200;
        TuitionWImprove[2] = 600;
        TuitionWImprove[3] = 1400;
        TuitionWImprove[4] = 1700;
        TuitionWImprove[5] = 2000;
    }
}

int Academic::GetPurchaseCost(){
    return PurchaseCost;
}

int Academic::GetImproveCost(){
    return ImproveCost;
}

int Academic::GetTuitionWImprove(){
    int r=TuitionWImprove[Level];
    if (ismonopoly) {
        if (Level == 0) {
            r = 2*r;
        }
    }
    return r;
}

int Academic::GetLevel(){
    return Level;
}

string Academic::GetMonopolyBlock(){
    return MonopolyBlock;
}

bool Academic::Getismonoply(){
    return ismonopoly;
}

string Academic::getname(){
    return name;
}

char Academic::getOwner(){
    return Owener;
}

bool Academic::gethasOwener(){
    return hasOwener;
}

void Academic::setmono(std::string typen){
    MonopolyBlock=typen;
}

void Academic::changelevel(int lv){
    Level=lv;
}

bool Academic::getmortgate(){
    return ismortgate;
}

void Academic::changemortgage(bool tf){
    ismortgate=tf;
}

void Academic::setLevel(int l){
    Level=l;
}

//

std::string Academic::getows(){
    return ows;
}

void Academic::setows(std::string n){
    ows=n;
}

void Academic::changehasOwener(){
    if (hasOwener == true) {
        hasOwener = false;
    }else{
        hasOwener = true;
    }
}

void Academic::sethasOwener(bool x){
    hasOwener = x;
}
void Academic::changeOwner(char n){
    Owener=n;
}

void Academic::setmonopoly(bool n){
    ismonopoly = n;
}

Academic::~Academic(){}

int Academic::getimprovement(){
    return Level;
}

