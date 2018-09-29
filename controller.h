//
//  controller.hpp
//  bbk7000
//
//  Created by Ethan Xie on 2015-11-26.
//  Copyright © 2015 Ethan Xie. All rights reserved.
//

#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <string>
#include "gameboard.h"
#include "dice.h"
#include "player.h"
#include "building.h"
#include <vector>
#include <iostream>
#include <sstream>

class Controller{
    Gameboard *game;
    Dice *d;
    int totalplayers;
    int academicPositon[22];
    int gymPosition[2];
    int residencePostion[4];
    int TotalCups;
    int Cups;
public:
    void inDcTimLine(int i);
    void rollHelper(int i);
    int check;
    bool canroll;
    bool isend;
    bool isload;
    bool testm;
    void printLevelHelper(int landposition,bool n);

    void removePlayer(Player *np);
    std::string filename;
    std::string *pl[40];
    std::string *mp[22];
    Controller();
    ~Controller();
    bool checkmbhasi(std::string n);
    void play_game();
    void clear_game();
    void IsMonopoly(int who);
    void cmd_roll(int who);
    void cmd_trade(int who);
    void cmd_improve(int who);
    void cmd_mortgage(int who);
    void cmd_unmortgage(int who);
    void cmd_assets(int who);
    void cmd_bankrupt(int who);
    void cmd_save();
    void cmd_exit();
    void updatemp();
    void updatepl();
    //double sell_all(Player *p);
    void aution(Player *p, Building *sell);
};

#endif


