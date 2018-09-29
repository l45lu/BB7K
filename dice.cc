#include "dice.h"
#include <iostream>
using namespace std;


Dice::Dice():die1(0),die2(0),slc(0),cups(0),nh(0){}

void Dice::printDice(){
    cout<<"dice 1 is "<< die1<<" and dice 2 is "<<die2<<". ";
}

void Dice::TDice(){
    cout << "Please Enter A Number for Dice1: " << endl;
    cin >> die1;
    cout << "Please Enter A Number for Dice2: " << endl;
    cin >> die2;
   /* while ((die1 > 6)||(die1 < 1)) {
        cout << "Dice 1 is invalid, please enter another one: "<< endl;
        cin >> die1;
    }
    while ((die2 > 6)||(die2 < 1)) {
        cout << "Dice 2 is invalid, please enter another one: "<< endl;
        cin >> die2;
    }*/
    srand(time(NULL));
    cups=(rand()%100+1);
    slc=(rand()%24+1);
    nh=(rand()%18+1);
}

void Dice::rollDice(){
    srand(time(NULL));
    die1=(rand()%6+1);
    die2=(rand()%6+1);
    //die1 = 4;
    //die2 = 6;
    cups=(rand()%100+1);
    slc=(rand()%24+1);
    nh=(rand()%18+1);
}

int Dice::getCups(){
    rollDice();
    return cups;
}

int Dice::getNh(){
    rollDice();
    return nh;
}

int Dice::getSlc(){
    rollDice();
    return slc;
}

int Dice::Dice1(){
    rollDice();
    return die1;
}

int Dice::Dice2(){
    rollDice();
    return die2;
}
bool Dice::CheckDouble(){
    //rollDice();
    /*printDice();
     if (die1 == die2 ) {
     cout << "You Rolled doubles!"<< endl;
     return true;
     }else {
     return false;
     }*/
    if (die1==die2) {
        return true;
    }else{
        return false;
    }
}


int Dice::Sum(){
    int check = 0;
    while (true) {
        rollDice();
        printDice();
        if (die1 == die2) {
            rollDice();
            cout << "You Rolled doubles!"<< endl;
            check ++;
            if (check == 3) {
                return 0; //must leave DCtims line by paying or using cups
            }
        }else{
            int sum = die1 + die2;
            return sum;
        }
    }
}


Dice::~Dice(){}



