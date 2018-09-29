//
//  gameboard.hpp
//  bbk7000
//
//  Created by Ethan Xie on 2015-11-26.
//  Copyright © 2015 Ethan Xie. All rights reserved.
//

#ifndef GAMEBOARD_H
#define GAMEBOARD_H
#include "player.h"
#include "building.h"
#include <vector>

class Gameboard{
public:
    int numPlayers;
    Building *map[40];
    std::vector <Player*> LandingPlayer;
    Gameboard();
    ~Gameboard();
    void addPlayer(Player *np);
    void removePlayer(Player *np);
    Player *getPlayer(char name);
    Player *getnPlayer(std::string name);
    Building *getBuilding(std::string name);
    int getpositioninlp(std::string name);
};



#endif


