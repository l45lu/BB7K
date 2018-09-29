//
//  play.hpp
//  bbk7000
//
//  Created by Ethan Xie on 2015-11-24.
//  Copyright © 2015 Ethan Xie. All rights reserved.
//

#ifndef PLAYER_H
#define PLAYER_H
#include <vector>
#include <string>
#include "building.h"

class Player{
    std::string WhoPlay;
    double Balance;
    char ReprePiece;
    int Position;
    bool CheckBankruptcy;
    int OwnResidence;
    int OwnGym;
    int Cups;
    int num_tims;
    std::vector<std::string> OwnedProperty;
    double assets;
    bool leave;
    int NumTims;
public:
    bool otherwayin;
    Player(std::string W,char R);
    ~Player();
    std::string GetWhoPlay();
    double GetBalance();
    char GetReprePiece();
    int GetPosition();
    bool GetCheckBankruptcy();
    int GetOwnResidence();
    int GetOwnGym();
    int GetCups();
    std::vector<std::string> GetOwnedProperty();
    void changeBalance(int amount);
    void changeProperty(int i, std::string p);//改变拥有的prpperty
    void changeCups(int c);
    void changeOwnResidence(int r);
    void changeOwnGym(int g);
    void setPosition(int p);
    void changePosition(int p);
    bool check_property(std::string p);
    double getassets();
    void changeassets(double as);
    void setleave(bool n);
    bool getleave();
    int getNumTims();
    void setNumTims(int n);
    void changeNumTims(int n);
    void setWhoPlay(std::string n);
    void setReprePiece(char n);
    void setcup(int n);
    void setBalance(double n);
};
#endif


