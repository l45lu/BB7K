//
//  gameboard.cpp
//  bbk7000
//
//  Created by Ethan Xie on 2015-11-26.
//  Copyright © 2015 Ethan Xie. All rights reserved.
//

#include "gameboard.h"
#include "gyms.h"
#include <vector>
#include "OSAP.h"
#include "residences.h"
#include "academic.h"
#include "SLC.h"
#include "tuition.h"
#include "NH.h"
#include "dctimsline.h"
#include "goose.h"
#include "coopfee.h"
#include "gototim.h"
#include <iostream>

using namespace std;

Gameboard::Gameboard():numPlayers(0){
    vector <Player*> LandingPlayer;
    //add all buildings in there!
    map[0]=new OSAP("COLLECT OSAP");
    map[1]=new Academic("AL");
    map[2]=new SLC("SLC");
    map[3]=new Academic("ML");
    map[4]=new Tuition("TUITION");
    map[5]=new Residence("MKV");
    map[6]=new Academic("ECH");
    map[7]=new NH("NEEDLES HALL");
    map[8]=new Academic("PAS");
    map[9]=new Academic("HH");
    map[10]=new Dctimsline("DC Tims Line");
    map[11]=new Academic("RCH");
    map[12]=new Gym("PAC");
    map[13]=new Academic("DWE");
    map[14]=new Academic("CPH");
    map[15]=new Residence("UWP");
    map[16]=new Academic("LHI");
    map[17]=new SLC("SLC");
    map[18]=new Academic("BMH");
    map[19]=new Academic("OPT");
    map[20]=new Goose("Goose Nesting");
    map[21]=new Academic("EV1");
    map[22]=new NH("NEEDLES HALL");
    map[23]=new Academic("EV2");
    map[24]=new Academic("EV3");
    map[25]=new Residence("V1");
    map[26]=new Academic("PHYS");
    map[27]=new Academic("B1");
    map[28]=new Gym("CIF");
    map[29]=new Academic("B2");
    map[30]=new Gototim("GO TO TIMS");
    map[31]=new Academic("EIT");
    map[32]=new Academic("ESC");
    map[33]=new SLC("SLC");
    map[34]=new Academic("C2");
    map[35]=new Residence("REV");
    map[36]=new NH("NEEDLES HALL");
    map[37]=new Academic("MC");
    map[38]=new Coopfee("COOP FEE");
    map[39]=new Academic("DC");
}

Gameboard::~Gameboard(){
    for (int i=0; i<LandingPlayer.size(); i++) {
        delete LandingPlayer[i];
    }
    LandingPlayer.clear();
    for (int i=0; i<40; i++) {
        delete map[i];
    }
}

void Gameboard::addPlayer(Player *np){
    LandingPlayer.push_back(np);
}

void Gameboard::removePlayer(Player *np){
    int pos=0;
    long nop=LandingPlayer.size();
    for (int i=0; i<nop; i++,pos++) {
        if (np->GetWhoPlay()==LandingPlayer[i]->GetWhoPlay()) {
            break;
        }
    }
    LandingPlayer.erase(pos+LandingPlayer.begin());
}

Player* Gameboard::getPlayer(char name){
    int pos=0;
    long nump=LandingPlayer.size();
    for (int i=0; i<nump; i++) {
        if (name==LandingPlayer[i]->GetReprePiece()) {
            break;
        }
        pos++;
    }
    return LandingPlayer[pos];
}
Player* Gameboard::getnPlayer(string name){
    int pos=0;
    long nump=LandingPlayer.size();
    for (int i=0; i<nump; i++) {
        //debug
        //cout<<"adsjkaljsd"<<" pos is "<<pos<<endl;
        if (name==LandingPlayer[i]->GetWhoPlay()) {
            break;
        }
        pos++;
    }
    return LandingPlayer[pos];
}

Building * Gameboard::getBuilding(string name){
    int pos=0;
    for (int i=0; i<40; i++) {
        if (map[i]->getname()==name) {
            break;
        }
        pos++;
    }
    return map[pos];
}



int Gameboard::getpositioninlp(string name){
    int who=0;
    for (int i=0; i<LandingPlayer.size(); i++) {
        if (LandingPlayer[i]->GetWhoPlay()==name) {
            break;
        }
    }
    return who;
}





