//
//  play.cpp
//  bbk7000
//
//  Created by Ethan Xie on 2015-11-24.
//  Copyright © 2015 Ethan Xie. All rights reserved.
//

#include "player.h"
#include <vector>
#include <iostream>
#include <stdlib.h>

using namespace std;


Player::Player(string W, char R){
    vector<string> OwnedProperty;
    WhoPlay=W;
    ReprePiece=R;
    Balance=1500;
    assets=1500;
    ReprePiece=R;
    Position=0;
    CheckBankruptcy=0;
    OwnResidence=0;
    OwnGym=0;
    Cups=0;
    num_tims=0;
    leave=true;
    NumTims=0;
    otherwayin=false;
}

Player::~Player(){
    OwnedProperty.clear();
}

string Player::GetWhoPlay(){
    return WhoPlay;
}

double Player::GetBalance(){
    return Balance;
}

char Player::GetReprePiece(){
    return ReprePiece;
}

int Player::GetPosition(){
    return Position;
}

bool Player::GetCheckBankruptcy(){
    return CheckBankruptcy;
}

int Player::GetOwnResidence(){
    return OwnResidence;
}


int Player::GetOwnGym(){
    return OwnGym;
}

int Player::GetCups(){
    return Cups;
}

vector<string> Player::GetOwnedProperty(){
    return OwnedProperty;
}

void Player::changeBalance(int amount){  //用来检查有没有破产。待考虑算法正确性
    Balance += amount;
    if(Balance < 0){
        cout << "Your balance is negative, I think you should call bankrupt right now" << endl;
    }
}

void Player::setPosition(int p){
    Position = p;
}

void Player::changeOwnResidence(int r){
    OwnResidence += r;
}

void Player::changeOwnGym(int g){
    OwnGym += g;
}

void Player::changeCups(int c){
    Cups += c;
}

void Player::changeProperty(int i, std::string p){   //改变拥有的prpperty
    if (i < 0) {
        long len = OwnedProperty.size();
        for (int i = 0; i < len; i++) {
            if (OwnedProperty[i] == p) {
                OwnedProperty.erase(OwnedProperty.begin()+ i);
                break;
            }
        }
    }else{
        OwnedProperty.push_back(p);
    }
}

bool Player::check_property(string p){
    long len=OwnedProperty.size();
    for (int i=0; i<len; i++) {
        if (p==OwnedProperty[i]) {
            return true;
        }
    }
    return false;
}

double Player::getassets(){
    return assets;
}

void Player::changeassets(double as){
    assets += as;
}

void Player::setleave(bool n){
    leave=n;
}

int Player::getNumTims(){
    return NumTims;
}

bool Player::getleave(){
    return leave;
}

void Player::setNumTims(int n){
    NumTims=n;
}

void Player::changeNumTims(int n){
    NumTims+=n;
}

void Player::setWhoPlay(string n){
    WhoPlay=n;
}

void Player::setReprePiece(char n){
    ReprePiece=n;
}

void Player::setcup(int n){
    Cups=n;
}

void Player::changePosition(int p){
    int n = Position+p;
    if (n >= 40) {
        Position = n - 40;
        cout << "you passed the OSAP collection point, you earned $200" << endl;
        Balance += 200;
        assets += 200;
    }else{
        Position += p;
    }
}

void Player::setBalance(double n){
    Balance=n;
}




