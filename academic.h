#ifndef _ACADEMIC_H_
#define _ACADEMIC_H_
#include "building.h"
#include "player.h"
#include <string>
#include <stdbool.h>

class Academic: public Building {
    std::string MonopolyBlock;
    std::string name;
    char Owener;
    bool hasOwener;
    int PurchaseCost;
    int ImproveCost;
    int Level;
    int TuitionWImprove[6];
    bool ismonopoly;
    bool ismortgate;
    std::string ows;
public:
    Academic(std::string name);
    std::string GetMonopolyBlock();
    int GetPurchaseCost();
    int GetImproveCost();
    int GetTuitionWImprove();
    int GetLevel();
    bool Getismonoply();
    ~Academic();
    void changehasOwener();
    void sethasOwener(bool x);
    char getOwner();
    bool gethasOwener();
    std::string getname();
    void setmono(std::string typen);
    void changelevel(int lv);
    bool getmortgate();
    void changemortgage(bool tf);
    void setLevel(int l);
    std::string getows();
    void setows(std::string n);
    void changeOwner(char n);
    void setmonopoly(bool n);
    int getimprovement();
};


#endif

