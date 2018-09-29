//
//  main.cpp
//  bbk7000
//
//  Created by Ethan Xie on 2015-11-24.
//  Copyright © 2015 Ethan Xie. All rights reserved.
//
#include <vector>
#include <iostream>
#include <string>
#include "controller.h"

using namespace std;

int main(int argc, const char * argv[]) {
   Controller *cr=new Controller();
  //  Controller cr;
    string s1,s2,s3,s4;
    if (argc==4) {
        s1=argv[1];
        s2=argv[2];
        s3=argv[3];
        if (s1=="-load" && s3=="-testing") {
            cr->filename=s2;
            cr->isload=true;
            cr->testm=true;
        }
        if (s1=="-testing" && s2=="-load") {
            cr->filename=s3;
            cr->testm=true;
            cr->isload=true;
        }
    } else if (argc==3){
        s1=argv[1];
        s2=argv[2];
        if (s1=="-load") {
            cr->filename=s2;
            cr->testm=false;
            cr->isload=true;
        }
    } else if (argc==2){
        s1=argv[1];
        if (s1=="-testing") {
            cr->testm=true;
        }
    }
    cr->play_game();
    //cr->clear_game();
   delete cr;
}
