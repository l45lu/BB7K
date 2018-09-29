//
//  controller.cpp
//  bbk7000
//
//  Created by Ethan Xie on 2015-11-26.
//  Copyright © 2015 Ethan Xie. All rights reserved.
//

#include "controller.h"
#include <iostream>
#include <fstream>

using namespace std;
//改了changeposition， 加了changehasowner和

//DC Tims Line 多人情况会有问题。


bool Isab(string n){
    if (n=="AL"||n=="ML"||n=="ECH"||n=="PAS"||n=="HH"||n=="RCH"||n=="DWE"||n=="CPH"||n=="LHI"||n=="BMH"||n=="OPT"||n=="EV1"||n=="EV2"||n=="EV3"||n=="PHYS"||n=="B1"||n=="B2"||n=="EIT"||n=="ESC"||n=="C2"||n=="MC"||n=="DC") {
        return true;
    }
    return false;
}

bool Isr(string n){
    if (n=="MKV"||n=="UWP"||n=="V1"||n=="REV") {
        return true;
    }
    return false;
}

bool Isg(string n){
    if (n=="PAC" || n=="CIF") {
        return true;
    }
    return false;
}

string p1 = "        ";
string p2 = "        ";
string p3 = "        ";
string p4 = "        ";
string p5 = "        ";
string p6 = "        ";
string p7 = "        ";
string p8 = "        ";
string p9 = "        ";
string p10 = "        ";
string p11 = "        ";
string p12 = "        ";
string p13 = "        ";
string p14 = "        ";
string p15 = "        ";
string p16 = "        ";
string p17 = "        ";
string p18 = "        ";
string p19 = "        ";
string p20 = "        ";
string p21 = "        ";
string p22 = "        ";
string p23 = "        ";
string p24 = "        ";
string p25 = "        ";
string p26 = "        ";
string p27 = "        ";
string p28 = "        ";
string p29 = "        ";
string p30 = "        ";
string p31 = "        ";
string p32 = "        ";
string p33 = "        ";
string p34 = "        ";
string p35 = "        ";
string p36 = "        ";
string p37 = "        ";
string p38 = "        ";
string p39 = "        ";
string p40 = "        ";

string l0 = "        ";
string l1 = "        ";
string l2 = "        ";
string l3 = "        ";
string l4 = "        ";
string l5 = "        ";
string l6 = "        ";
string l7 = "        ";
string l8 = "        ";
string l9 = "        ";
string l10 = "        ";
string l11= "        ";
string l12 = "        ";
string l13 = "        ";
string l14 = "        ";
string l15 = "        ";
string l16 = "        ";
string l17 = "        ";
string l18= "        ";
string l19= "        ";
string l20= "        ";
string l21= "        ";

void makeBoard(){
    
    //底下全部要放在main里面
    //所有 property的房子需要加上两个field 就是 pX和lX的reference 通过这两个field去改变棋盘上的信息
    //其余的房子 （non－property） 需要加上一个field px的reference
    
    //note : pX代表站在这个房子上的所有player的代号 lX代表这个房子拥有者名字代号
    
    string a1[1]  = {"____________________________________________________________________________________________________"};
    string a2[13] = {"|Goose   |",l11,"|NEEDLES |",l12,"|",l13,"|V1      |",l14,"|",l15,"|CIF     |",l16,"|GO TO   |"};
    string a3[1] =  {"|Nesting |--------|HALL    |--------|--------|        |--------|--------|        |--------|TIMS    |"};
    string a4[1] =  {"|        |EV1     |        |EV2     |EV3     |        |PHYS    |B1      |        |B2      |        |"};
    string a5[23] =  {"|",p1, "|", p2,"|", p3,"|", p4,"|", p5,"|", p6,"|", p7,"|", p8,"|", p9,"|",p10,"|",p11,"|"};
    string a6[1] =  {"|________|________|________|________|________|________|________|________|________|________|________|"};
    string a7[5] =  {"|",l10,"|                                                                                |",l17,"|"};
    string a8[1] =  {"|--------|                                                                                |--------|"};
    string a9[1] =  {"|OPT     |                                                                                |EIT     |"};
    string a10[5] =  {"|",p40,"|                                                                                |",p12,"|"};
    string a11[1] =  {"|________|                                                                                |________|"};
    string a12[5] =  {"|", l9,"|                                                                                |",l18,"|"};
    string a13[1] =  {"|--------|                                                                                |--------|"};
    string a14[1] =  {"|BMH     |                                                                                |ESC     |"};
    string a15[5] =  {"|",p39,"|                                                                                |",p13,"|"};
    string a16[1] =  {"|________|                                                                                |________|"};
    string a17[1] =  {"|SLC     |                                                                                |SLC     |"};
    string a18[1] =  {"|        |                                                                                |        |"};
    string a19[1] =  {"|        |                                                                                |        |"};
    string a20[5] =  {"|",p38,"|                                                                                |",p14,"|"};
    string a21[1] =  {"|________|                                                                                |________|"};
    string a22[5] =  {"|", l8,"|                                                                                |", l19,"|"};
    string a23[1] =  {"|--------|                                                                                |--------|"};
    string a24[1] =  {"|LHI     |                    _———_                                                       |C2      |"};
    string a25[5] =  {"|",p37,"|                   /  @  \\                                                      |", p15,"|"};
    string a26[1] =  {"|________|                <==_     |                                                      |________|"};
    string a27[1] =  {"|UWP     |                    \\   /                                                       |REV     |"};
    string a28[1] =  {"|        |                     |  \\__                                                     |        |"};
    string a29[1] =  {"|        |                    /      ---___                                               |        |"};
    string a30[5] =  {"|",p36,"|                   /     =^^^^-__--/                                            |", p16,"|"};
    string a31[1] =  {"|________|                   |           _^^/ ###    ###   #####  #   #                   |________|"};
    string a32[3] =  {"|",l7 ,"|                    \\_______--^-/   #  #   #  #      #  #  #                    |NEEDLES |"};
    string a33[1] =  {"|--------|                     \\________/     ####   ####     #   ###                     |HALL    |"};
    string a34[1] =  {"|CPH     |                      _|_ _|_       #   #  #   #   #    #  #                    |        |"};
    string a35[5] =  {"|",p35,"|                       *   *        ####   ####   #     #   #                   |", p17,"|"};
    string a36[1] =  {"|________|                                                                                |________|"};
    string a37[5] =  {"|", l6 ,"|                                                                                |", l20,"|"};
    string a38[1] =  {"|--------|                                                                                |--------|"};
    string a39[1] =  {"|DWE     |                                                                                |MC      |"};
    string a40[5] =  {"|", p34,"|                                                                                |", p18,"|"};
    string a41[1] =  {"|________|                                                                                |________|"};
    string a42[1] =  {"|PAC     |                                                                                |COOP    |"};
    string a43[1] =  {"|        |                                                                                |FEE     |"};
    string a44[1] =  {"|        |                                                                                |        |"};
    string a45[5] =  {"|", p33,"|                                                                                |", p19,"|"};
    string a46[1] =  {"|________|                                                                                |________|"};
    string a47[5] =  {"|", l5 ,"|                                                                                |", l21,"|"};
    string a48[1] =  {"|--------|                                                                                |--------|"};
    string a49[1] =  {"|RCH     |                                                                                |DC      |"};
    string a50[5] =  {"|", p32,"|                                                                                |", p20,"|"};
    string a51[1] =  {"|________|________________________________________________________________________________|________|"};
    string a52[11] =  {"|DC Tims |",l4 ,"|", l3,"|NEEDLES |", l2,"|MKV     |TUITION |", l1,"|SLC     |", l0,"|COLLECT |"};
    string a53[1] =  {"|Line    |--------|--------|HALL    |--------|        |        |--------|        |--------|OSAP    |"};
    string a54[1] =  {"|        |HH      |PAS     |        |ECH     |        |        |ML      |        |AL      |        |"};
    string a55[23] =  {"|",p31,"|",p30,"|",p29,"|",p28,"|",p27,"|",p26,"|",p25,"|",p24,"|",p23,"|",p22,"|",p21,"|"};
    string a56[1] =  {"|________|________|________|________|________|________|________|________|________|________|________|"};
    
    
    
    
    
    cout << a1[0] << endl;
    for ( int i = 0; i < 13; i++) {
        cout << a2[i];
    }
    cout << endl;
    cout << a3[0] << endl << a4[0] << endl;
    for (int i = 0; i < 23; i++) {
        cout << a5[i];
    }
    cout << endl;
    cout << a6[0] << endl;
    for (int i = 0 ; i < 5; i++) {
        cout << a7[i];
    }
    cout << endl;
    cout << a8[0] << endl << a9[0] << endl;
    for (int i = 0 ; i < 5; i++) {
        cout << a10[i];
    }
    cout << endl << a11[0] << endl;
    for (int i = 0 ; i < 5; i++) {
        cout << a12[i];
    }
    cout << endl << a13[0] << endl << a14[0] << endl;
    for (int i = 0 ; i < 5; i++) {
        cout << a15[i];
    }
    cout << endl << a16[0] << endl << a17[0] << endl << a18[0] << endl << a19[0] << endl;
    for (int i = 0 ; i < 5; i++) {
        cout << a20[i];
    }
    cout << endl << a21[0] << endl;
    for (int i = 0 ; i < 5; i++) {
        cout << a22[i];
    }
    cout << endl << a23[0] << endl << a24[0] << endl;
    for (int i = 0 ; i < 5; i++) {
        cout << a25[i];
    }
    cout << endl << a26[0] << endl << a27[0] << endl << a28[0] << endl << a29[0] << endl;
    for (int i = 0 ; i < 5; i++) {
        cout << a30[i];
    }
    cout << endl << a31[0] << endl;
    for (int i = 0 ; i < 3; i++) {
        cout << a32[i];
    }
    cout << endl << a33[0] << endl << a34[0] << endl;
    for (int i = 0 ; i < 5; i++) {
        cout << a35[i];
    }
    cout << endl << a36[0] << endl;
    for (int i = 0 ; i < 5; i++) {
        cout << a37[i];
    }
    cout << endl << a38[0] << endl << a39[0] << endl;
    for (int i = 0 ; i < 5; i++) {
        cout << a40[i];
    }
    cout << endl << a41[0] << endl << a42[0] << endl << a43[0] << endl << a44[0] << endl;
    for (int i = 0 ; i < 5; i++) {
        cout << a45[i];
    }
    cout << endl << a46[0] << endl;
    for (int i = 0 ; i < 5; i++) {
        cout << a47[i];
    }
    cout << endl << a48[0] << endl << a49[0] << endl;
    for (int i = 0 ; i < 5; i++) {
        cout << a50[i];
    }
    cout << endl << a51[0] << endl;
    for (int i = 0 ; i < 11; i++) {
        cout << a52[i];
    }
    cout << endl << a53[0] << endl << a54[0] << endl;
    for (int i = 0  ; i < 23; i++) {
        cout << a55[i];
    }
    cout << endl << a56[0] << endl;
}


/*void Controller::updatemp(){
 for (int i=0; i<40; i++) {
 if (game->map[i]->getOwner()!='K') {
 mp[i]=game->map[i]->getOwner();
 }
 }
 }
 
 void Controller::updatepl(){
 long len=game->LandingPlayer.size();
 for (int i=0; i<len; i++) {
 stringstream ss;
 string n;
 ss<<game->LandingPlayer[i]->GetReprePiece();
 ss>>n;
 pl[game->LandingPlayer[i]->GetPosition()]+=n;
 }
 }
 */


//update info
string intToString(int k){
    string x;
    stringstream ss;
    ss << k;
    x = ss.str();
    return x;
}

string charToString(char k){
    string x;
    stringstream ss;
    ss << k;
    x = ss.str();
    return x;
}

void printLevel(bool monopoly, string *k, int l){/*string is mp[landposition]
                                                  owner is game->map[landposition]->gethasOwner()
                                                  l is the level of the property*/
    
    if (monopoly == true) {
        if (l == -1) {
            string x = "Mortgage";
            string w = x;
            k->replace(0, 8, w);
        } else{
            string w = " Lv: "+ intToString(l) + "  ";
            k->replace(0, 8, w);
        }
    }
    else{
        string w = "        ";
        k->replace(0, 8, w);
    }
}

void printLand(string *k, char owner){/*string is pl[landposition]
                                       owner is the game->map[landposition]->getOwner*/
    
    string x = charToString(owner);
    for (int i = 0; i< 8; i++) {
        if (k->substr(i,1) == x) {
            break;
        }
        if(k->substr(i,1) == " "){
            k->replace(i, 1, x);
            break;
        }
    }
}

void cleanLand(string *k, char owner){/*string is pl[landposition]
                                       owner is the game->map[landposition]->getOwner*/
    string x = charToString(owner);
    for (int i = 0; i< 8; i++) {
        if(k->substr(i,1) == x){
            k->replace(i, 1, " ");
            break;
        }
    }
}

int getmPt(string n){
    if (n=="AL") return 1;
    if (n=="ML") return 3;
    if (n=="ECH") return 6;
    if (n=="PAS") return 8;
    if (n=="HH") return 9;
    if (n=="RCH") return 11;
    if (n=="DWE") return 13;
    if (n=="CPH") return 14;
    if (n=="LHI") return 16;
    if (n=="BMH") return 18;
    if (n=="OPT") return 19;
    if (n=="EV1") return 21;
    if (n=="EV2") return 23;
    if (n=="EV3") return 24;
    if (n=="PHYS") return 26;
    if (n=="B1") return 27;
    if (n=="B2") return 29;
    if (n=="EIT") return 31;
    if (n=="ESC") return 32;
    if (n=="C2") return 34;
    if (n=="MC") return 37;
    else {
        return 39;
    }
}

int getPt(string n){
    if (n=="AL") return 0;
    if (n=="ML") return 1;
    if (n=="ECH") return 2;
    if (n=="PAS") return 3;
    if (n=="HH") return 4;
    if (n=="RCH") return 5;
    if (n=="DWE") return 6;
    if (n=="CPH") return 7;
    if (n=="LHI") return 8;
    if (n=="BMH") return 9;
    if (n=="OPT") return 10;
    if (n=="EV1") return 11;
    if (n=="EV2") return 12;
    if (n=="EV3") return 13;
    if (n=="PHYS") return 14;
    if (n=="B1") return 15;
    if (n=="B2") return 16;
    if (n=="EIT") return 17;
    if (n=="ESC") return 18;
    if (n=="C2") return 19;
    if (n=="MC") return 20;
    else {
        return 21;
    }
}

Controller::Controller():isload(false),totalplayers(0),filename(""),testm(false),isend(false),canroll(true),Cups(0),TotalCups(4),check(0){
    mp[0] = &l0;
    mp[1] = &l1;
    mp[2] = &l2;
    mp[3] = &l3;
    mp[4] = &l4;
    mp[5] = &l5;
    mp[6] = &l6;
    mp[7] = &l7;
    mp[8] = &l8;
    mp[9] = &l9;
    mp[10] = &l10;
    mp[11] = &l11;
    mp[12] = &l12;
    mp[13] = &l13;
    mp[14] = &l14;
    mp[15] = &l15;
    mp[16] = &l16;
    mp[17] = &l17;
    mp[18] = &l18;
    mp[19] = &l19;
    mp[20] = &l20;
    mp[21] = &l21;
    
    
    pl[0]= &p21;
    pl[1]= &p22;
    pl[2]= &p23;
    pl[3]= &p24;
    pl[4]= &p25;
    pl[5]= &p26;
    pl[6]= &p27;
    pl[7]= &p28;
    pl[8]= &p29;
    pl[9]= &p30;
    pl[10]= &p31;
    pl[11]= &p32;
    pl[12]= &p33;
    pl[13]= &p34;
    pl[14]= &p35;
    pl[15]= &p36;
    pl[16]= &p37;
    pl[17]= &p38;
    pl[18]= &p39;
    pl[19]= &p40;
    pl[20]= &p1;
    pl[21]= &p2;
    pl[22]= &p3;
    pl[23]= &p4;
    pl[24]= &p5;
    pl[25]= &p6;
    pl[26]= &p7;
    pl[27]= &p8;
    pl[28]= &p9;
    pl[29]= &p10;
    pl[30]= &p11;
    pl[31]= &p12;
    pl[32]= &p13;
    pl[33]= &p14;
    pl[34]= &p15;
    pl[35]= &p16;
    pl[36]= &p17;
    pl[37]= &p18;
    pl[38]= &p19;
    pl[39]= &p20;
    
    TotalCups = 4;
    Cups = 0;
    d=new Dice();
    game=new Gameboard();
    academicPositon[0]= 1;
    academicPositon[1]= 3;
    academicPositon[2]= 6;
    academicPositon[3]= 8;
    academicPositon[4]= 9;
    academicPositon[5]= 11;
    academicPositon[6]= 13;
    academicPositon[7]= 14;
    academicPositon[8]= 16;
    academicPositon[9]= 18;
    academicPositon[10]= 19;
    academicPositon[11]= 21;
    academicPositon[12]= 23;
    academicPositon[13]= 24;
    academicPositon[14]= 26;
    academicPositon[15]= 27;
    academicPositon[16]= 29;
    academicPositon[17]= 31;
    academicPositon[18]= 32;
    academicPositon[19]= 34;
    academicPositon[20]= 37;
    academicPositon[21]= 39;
    
    gymPosition[0] = 12;
    gymPosition[1] = 28;
    residencePostion[0]= 5;
    residencePostion[1]= 15;
    residencePostion[2]= 25;
    residencePostion[3]= 35;
}

bool IsProperty(int land, int len, int *arr){
    for (int i = 0; i < len; i++) {
        if (land == arr[i]) {
            return true;
        }
    }
    return false;
}


string getNb(int n){
    if (n==0) return "COLLECT OSAP";
    if (n==1) return "AL";
    if (n==2) return "SLC";
    if (n==3) return "ML";
    if (n==4) return "TUITION";
    if (n==5) return "MKV";
    if (n==6) return "ECH";
    if (n==7) return "NEEDLES HALL";
    if (n==8) return "PAS";
    if (n==9) return "HH";
    if (n==10) return "DC Tims Line";
    if (n==11) return "RCH";
    if (n==12) return "PAC";
    if (n==13) return "DWE";
    if (n==14) return "CPH";
    if (n==15) return "UWP";
    if (n==16) return "LHI";
    if (n==17) return "SLC";
    if (n==18) return "BMH";
    if (n==19) return "OPT";
    if (n==20) return "Goose Nesting";
    if (n==21) return "EV1";
    if (n==22) return "NEEDLES HALL";
    if (n==23) return "EV2";
    if (n==24) return "EV3";
    if (n==25) return "V1";
    if (n==26) return "PHYS";
    if (n==27) return "B1";
    if (n==28) return "CIF";
    if (n==29) return "B2";
    if (n==30) return "GO TO TIMS";
    if (n==31) return "EIT";
    if (n==32) return "ESC";
    if (n==33) return "SLC";
    if (n==34) return "C2";
    if (n==35) return "REV";
    if (n==36) return "NEEDLES HALL";
    if (n==37) return "MC";
    if (n==38) return "COOP FEE";
    else  return "DC";
    
}

bool Controller::checkmbhasi(string n){
    int pos=getmPt(n);
    if (Isab(n)) {
        return false;
    }
    if (pos==1||pos==3) {
        if (game->map[1]->GetLevel()==0 && game->map[3]->GetLevel()==0) {
            return true;
        }
    } else if (pos==6||pos==8||pos==9){
        if (game->map[6]->GetLevel()==0 && game->map[8]->GetLevel()==0 && game->map[9]->GetLevel()==0) {
            return true;
        }
    } else if (pos==11 || pos==13 || pos==14){
        if (game->map[11]->GetLevel()==0 && game->map[13]->GetLevel()==0 && game->map[14]->GetLevel()==0) {
            return true;
        }
    } else if (pos==16 || pos==18 || pos==19){
        if (game->map[16]->GetLevel()==0 && game->map[18]->GetLevel()==0 && game->map[19]->GetLevel()==0) {
            return true;
        }
    } else if (pos==21 || pos==23 || pos==24){
        if (game->map[21]->GetLevel()==0 && game->map[23]->GetLevel()==0 && game->map[24]->GetLevel()==0) {
            return true;
        }
    } else if (pos==26 || pos==27 || pos==29){
        if (game->map[26]->GetLevel()==0 && game->map[27]->GetLevel()==0 && game->map[29]->GetLevel()==0) {
            return true;
        }
    } else if (pos==31 || pos==32 || pos==34){
        if (game->map[31]->GetLevel()==0 && game->map[32]->GetLevel()==0 && game->map[34]->GetLevel()==0) {
            return true;
        }
    } else if (pos==37 || pos==39){
        if (game->map[37]->GetLevel()==0 && game->map[39]->GetLevel()==0) {
            return true;
        }
    }
    return false;
}



void Controller::IsMonopoly(int who){
    for (unsigned int i=0; i<game->LandingPlayer[who]->GetOwnedProperty().size(); i++) {
        if (Isab(game->LandingPlayer[who]->GetOwnedProperty()[i])) {
            int landposition = getmPt(game->LandingPlayer[who]->GetOwnedProperty()[i]);
            if((landposition == 1)||(landposition == 3)){//arts1
                if (game->map[1]->getOwner() == game->map[3]->getOwner()) {
                    game->map[1]->setmonopoly(true);
                    game->map[3]->setmonopoly(true);
                } else{
                    game->map[1]->setmonopoly(false);
                    game->map[3]->setmonopoly(false);
                }
            }
            if((landposition == 6)||(landposition == 8)||(landposition == 9)){ //arts2
                if ((game->map[6]->getOwner() == game->map[8]->getOwner())&&
                    (game->map[8]->getOwner() == game->map[9]->getOwner())){
                    game->map[6]->setmonopoly(true);
                    game->map[8]->setmonopoly(true);
                    game->map[9]->setmonopoly(true);
                } else{
                    game->map[6]->setmonopoly(false);
                    game->map[8]->setmonopoly(false);
                    game->map[9]->setmonopoly(false);
                }
            }
            if((landposition == 11)||(landposition == 13)||(landposition == 14)){//eng
                if ((game->map[11]->getOwner() == game->map[13]->getOwner())&&
                    (game->map[13]->getOwner() == game->map[14]->getOwner())){
                    game->map[11]->setmonopoly(true);
                    game->map[13]->setmonopoly(true);
                    game->map[14]->setmonopoly(true);
                } else {
                    game->map[11]->setmonopoly(false);
                    game->map[13]->setmonopoly(false);
                    game->map[14]->setmonopoly(false);
                }
            }
            if((landposition == 16)||(landposition == 18)||(landposition == 19)){//health
                if ((game->map[16]->getOwner() == game->map[18]->getOwner())&&
                    (game->map[18]->getOwner() == game->map[19]->getOwner())){
                    game->map[16]->setmonopoly(true);
                    game->map[18]->setmonopoly(true);
                    game->map[19]->setmonopoly(true);
                } else{
                    game->map[16]->setmonopoly(false);
                    game->map[18]->setmonopoly(false);
                    game->map[19]->setmonopoly(false);
                }
            }
            if((landposition == 21)||(landposition == 23)||(landposition == 24)){//Env
                if ((game->map[21]->getOwner() == game->map[23]->getOwner())&&
                    (game->map[23]->getOwner() == game->map[24]->getOwner())){
                    game->map[21]->setmonopoly(true);
                    game->map[23]->setmonopoly(true);
                    game->map[24]->setmonopoly(true);
                } else{
                    game->map[21]->setmonopoly(false);
                    game->map[23]->setmonopoly(false);
                    game->map[24]->setmonopoly(false);
                }
            }
            if((landposition == 26)||(landposition == 27)||(landposition == 29)){//Sci1
                if ((game->map[26]->getOwner() == game->map[27]->getOwner())&&
                    (game->map[27]->getOwner() == game->map[29]->getOwner())){
                    game->map[26]->setmonopoly(true);
                    game->map[27]->setmonopoly(true);
                    game->map[29]->setmonopoly(true);
                } else{
                    game->map[26]->setmonopoly(false);
                    game->map[27]->setmonopoly(false);
                    game->map[29]->setmonopoly(false);
                }
            }
            if((landposition == 31)||(landposition == 32)||(landposition == 34)){//Sci2
                if ((game->map[31]->getOwner() == game->map[32]->getOwner())&&
                    (game->map[32]->getOwner() == game->map[34]->getOwner())){
                    game->map[31]->setmonopoly(true);
                    game->map[32]->setmonopoly(true);
                    game->map[34]->setmonopoly(true);
                } else{
                    game->map[26]->setmonopoly(false);
                    game->map[27]->setmonopoly(false);
                    game->map[29]->setmonopoly(false);
                }
            }
            if((landposition == 37)||(landposition == 39)){//Math
                if (game->map[37]->getOwner() == game->map[39]->getOwner()) {
                    game->map[37]->setmonopoly(true);
                    game->map[39]->setmonopoly(true);
                } else{
                    game->map[26]->setmonopoly(false);
                    game->map[27]->setmonopoly(false);
                    game->map[29]->setmonopoly(false);
                }
            }
            Building *he=game->getBuilding(game->LandingPlayer[who]->GetOwnedProperty()[i]);
            if (he->GetLevel() >= 0) {
                printLevel(he->Getismonoply(), mp[getPt(game->LandingPlayer[who]->GetOwnedProperty()[i])], he->GetLevel());
            }
        }
    }
}




bool other = false;

Controller::~Controller(){
    delete game;
    delete d;
}

void Controller::play_game(){//draw board after every time command called
    //
    
    //testmode
    
    //testm=true;
    
    //
    if (isload) {
        //loading game hahhahahahh
        ifstream loadfile;
        loadfile.open(filename.c_str());
        string read;
        int tcups=0;
        int i=0;
        while (getline(loadfile,read)) {
            stringstream checkn(read);
            stringstream ss1(read);
            int nump;
            if (checkn>>nump){
                totalplayers=nump;
                //cout<<"totalplayer: "<<totalplayers<<nump<<endl;
                continue;
            }
            i++;
            if (i<=totalplayers) {
                string playername;
                char playerchar;
                int timscups;
                //
                // cout<<"debug for load, cups"<<tcups<<endl;
                //
                double bal;
                int pos;
                ss1>>playername>>playerchar>>timscups>>bal>>pos;
                //
                //cout<<"debug for load, player "<<playername<<endl;
                //cout<<"debug for load, playerc "<<playerchar<<endl;
                // cout<<"debug for load, playert "<<timscups<<endl;
                //cout<<"debug for load, playerbal "<<bal<<endl;
                //cout<<"debug fot load, playerpos:" <<pos<<endl;
                //
                tcups+=timscups;
                Player *np=new Player(playername, playerchar);
                np->setcup(timscups);
                np->setBalance(bal);
                np->setPosition(pos);
                if (pos==10) {
                    int l;
                    ss1>>l;
                    np->setleave(l);
                    if (l == 0) {
                        np->otherwayin = true;
                    }
                    //
                    //cout<<"debug fot load, playerleave:" <<l<<endl;
                    //
                    if (l==1) {
                        int nt;
                        ss1>>nt;
                        np->setNumTims(nt);
                        //
                        //cout<<"debug fot load, playernumtims:" <<nt<<endl;
                        //
                    }
                }
                game->addPlayer(np);
                if (tcups>4) {
                    //
                    //cout<<"debug total cups: "<<tcups<<endl;
                    //
                    cout<<"More than 4 tims cups, invaild file loading"<<endl;
                    //clear_game();
                    return;
                }
            } else {
                string buildingn;
                string ow;
                int imp;
                ss1>>buildingn>>ow>>imp;
                for (int p=0; p<totalplayers; p++) {
                    if (ow==game->LandingPlayer[p]->GetWhoPlay()){
                        game->LandingPlayer[p]->changeProperty(1, buildingn);
                    }
                }
                for (int m=0; m<40; m++) {
                    if (game->map[m]->getname()==buildingn){
                        if (ow!="BANK") {
                            for (int i=0; i<totalplayers; i++) {
                                if (ow==game->LandingPlayer[i]->GetWhoPlay()) {
                                    char upc=game->LandingPlayer[i]->GetReprePiece();
                                    game->map[m]->changeOwner(upc);
                                    game->LandingPlayer[i]->changeassets(game->map[m]->GetPurchaseCost());
                                    //cout<<buildingn<<" cost "<<game->map[m]->GetPurchaseCost()<<endl;
                                }
                            }
                            game->map[m]->sethasOwener(true);
                            game->map[m]->setows(ow);//string ow
                            //
                            //cout<<buildingn<<" level "<<imp<<endl;
                            //
                            if (Isab(buildingn)) {
                                game->map[m]->setLevel(imp);
                            } else if(Isg(buildingn)){
                                game->map[m]->setRimprovement(imp);
                                game->getnPlayer(game->map[m]->getows())->changeOwnGym(1);
                                
                            } else if(Isr(buildingn)){
                                game->map[m]->setRimprovement(imp);
                                game->getnPlayer(game->map[m]->getows())->changeOwnResidence(1);
                            }
                        }
                    }
                }
            }
        }
        
        
        
        loadfile.close();
        for (int i=0; i<totalplayers; i++) {
            IsMonopoly(i);
        }
        cout<<"Game Loaded"<<endl;
        for (int i=0; i<totalplayers; i++) {
            game->LandingPlayer[i]->changeassets(-1500+game->LandingPlayer[i]->GetBalance());
        }
        for (int who=0; who<totalplayers; who++) {
            for (unsigned int i=0; i<game->LandingPlayer[who]->GetOwnedProperty().size(); i++) {
                if (Isab(game->LandingPlayer[who]->GetOwnedProperty()[i])) {
                    Building *he=game->getBuilding(game->LandingPlayer[who]->GetOwnedProperty()[i]);
                    printLevel(he->Getismonoply(), mp[getPt(game->LandingPlayer[who]->GetOwnedProperty()[i])], he->GetLevel());
                }
            }
        }
        for (int i=0; i<totalplayers; i++) {
            printLand(pl[game->LandingPlayer[i]->GetPosition()], game->LandingPlayer[i]->GetReprePiece());
        }
        makeBoard();
        while (totalplayers!=1) {//change to 1
            for (int i=0; i<totalplayers; i++) {
                if (isend) {
                    return;
                }
                cout<<"Hi,"<<game->LandingPlayer[i]->GetWhoPlay()<<". It's Your turn."<<endl;
                
                if ((game->LandingPlayer[i]->getleave() == false)&& (game->LandingPlayer[i]->otherwayin == true)){  // 被困在Dc tim line
                    //  cout<<"肯定进来啦"<<endl;
                  //  if (other == true) {
                        inDcTimLine(i);
                        //other = false;
                        // break;
                   // }
                }else {
                    cout<<"Please Enter Command:roll/trade/improve/mortgage/unmortgage/assets/save/exit"<<endl;
                    // cout<<"Please Enter Command:roll/trade/improve/mortgage/unmortgage/assets/save/exit"<<endl;
                    //debug
                    //cout<<game->map[0]->getname()<<endl;
                    /*for (int i=0; i<40; i++) {
                     cout<<game->map[i]->getname()<<endl;
                     cout<<game->map[i]->getOwner()<<endl;
                     cout<<game->map[i]->gethasOwener()<<endl;
                     cout<<game->map[i]->getOwner()<<endl;
                     }*/
                    string command;
                    while (!isend) {
                        cin>>command;
                        if (command=="next") {
                            if (canroll){
                                cout<<"You cannot call next before you rolled."<<endl;
                                continue;
                            }
                            canroll=true;
                            printLand(pl[game->LandingPlayer[i]->GetPosition()], game->LandingPlayer[i]->GetReprePiece());
                            makeBoard();
                            break;
                        }
                        else if (command=="roll") {
                            if(game->LandingPlayer[i]->otherwayin == false){
                                if (game->LandingPlayer[i]->getleave() == true) {
                                    cmd_roll(i);
                                } else{ //canleave 是false就不能call这个
                                    cout <<"You cannot roll since you are not allowed to leave DC Tims Line " << endl;
                                    continue;
                                }
                            }else {
                                cout <<"You cannot roll since you are not allowed to leave DC Tims Line " << endl;
                                continue;
                            }
                        }
                        else if (command=="trade") cmd_trade(i);
                        else if (command=="improve") cmd_improve(i);
                        else if (command=="mortgage") cmd_mortgage(i);
                        else if (command=="unmortgage") cmd_unmortgage(i);
                        else if (command=="assets") cmd_assets(i);
                        else if (command=="save") cmd_save();
                        else if (command=="exit") cmd_exit();
                        else if (command=="bankrupt") cmd_bankrupt(i);
                        else cout<<"Invalid Command, Please Enter it again"<<endl;
                    }
                    //print gameboard
                }
            }
            if (totalplayers==1) {
                cout<<"This Winner is "<<game->LandingPlayer[0]->GetWhoPlay()<<"."<<endl;
            }
        }
    } else {
        // print gameboard code
        cout<<"Welcome to the Game of BuildingBuyer7000"<<endl;
        cout<<"Please Enter the Number of Players:"<<endl;
        int tempnumber;
        cin>>tempnumber;
       /* if (tempnumber<6 || tempnumber>8) {
            cout <<"The number of player must be 6-8!"<<endl;
            return;
        }*/
        if (false) {
            cout<<"the Number of Players should be 6|7|8"<<endl;
            return;
        } else{
            //int i=0;
            while (tempnumber!=0) {
                cout<<"Please Enter Your Player Name:"<<endl;
                string tempn;
                cin>>tempn;
                cout<<"Hi, "<<tempn<<". Please Enter a Character [G/B/D/P/S/$/L/T] for Your IGN:"<<endl;
                char tempc;
                cin>>tempc;
                Player *newp=new Player(tempn,tempc);
                game->addPlayer(newp);
                tempnumber--;
                totalplayers++;
                printLand(pl[0], newp->GetReprePiece());
                //game->LandingPlayer[i]=new Player(tempn,tempc);
                //change the textdisplay?????
            }
        }
        makeBoard();
        while (totalplayers!=1) {//change to 1
            for (int i=0; i<totalplayers; i++) {
                if (isend) {
                    return;
                }
                cout<<"Hi,"<<game->LandingPlayer[i]->GetWhoPlay()<<". It's Your turn."<<endl;
                
                if ((game->LandingPlayer[i]->getleave() == false)&& (game->LandingPlayer[i]->otherwayin == true)){  // 被困在Dc tim line
                    //cout<<"肯定进来啦"<<endl;
                // if (other == true) {
                        inDcTimLine(i);
                        //other = false;
                        // break;
                   // }
                }else {
                    cout<<"Please Enter Command:roll/trade/improve/mortgage/unmortgage/assets/save/exit"<<endl;
                }
                // cout<<"Please Enter Command:roll/trade/improve/mortgage/unmortgage/assets/save/exit"<<endl;
                //debug
                //cout<<game->map[0]->getname()<<endl;
                /*for (int i=0; i<40; i++) {
                 cout<<game->map[i]->getname()<<endl;
                 cout<<game->map[i]->getOwner()<<endl;
                 cout<<game->map[i]->gethasOwener()<<endl;
                 cout<<game->map[i]->getOwner()<<endl;
                 }*/
                string command;
                while (!isend) {
                    cin>>command;
                    if (command=="next") {
                        if (canroll){
                            cout<<"You cannot call next before you rolled."<<endl;
                            continue;
                        }
                        other = true;
                        //game->LandingPlayer[i]->otherwayin = false;
                        canroll=true;
                        printLand(pl[game->LandingPlayer[i]->GetPosition()], game->LandingPlayer[i]->GetReprePiece());
                        makeBoard();
                        break;
                    }
                    else if (command=="roll") {
                        if(game->LandingPlayer[i]->otherwayin == false){
                            if (game->LandingPlayer[i]->getleave() == true) {
                                cmd_roll(i);
                            } else{ //canleave 是false就不能call这个
                                cout <<"You cannot roll since you are not allowed to leave DC Tims Line " << endl;
                                continue;
                            }
                        }else {
                            cout <<"You cannot roll since you are not allowed to leave DC Tims Line " << endl;
                            continue;
                        }
                    }
                    else if (command=="trade") cmd_trade(i);
                    else if (command=="improve") cmd_improve(i);
                    else if (command=="mortgage") cmd_mortgage(i);
                    else if (command=="unmortgage") cmd_unmortgage(i);
                    else if (command=="assets") cmd_assets(i);
                    else if (command=="save") cmd_save();
                    else if (command=="exit") cmd_exit();
                    else cout<<"Invalid Command, Please Enter it again"<<endl;
                }
                //print gameboard
            }
        }
        if (totalplayers==1) {
            cout<<"This Winner is "<<game->LandingPlayer[0]->GetWhoPlay()<<"."<<endl;
        }
    }
}

/*void Controller::cmd_roll(int who){ wode
 int check = 0;
 while (d->CheckDouble() == true) {
 check ++;
 if (check == 3) {
 game->LandingPlayer[who]->setPosition(10);
 cout<<"Now, you are in "<<game->map[game->LandingPlayer[who]->GetPosition()]->getname()<<"."<<endl;
 //helper function for buildings
 //print the map
 return;
 }
 }
 int step=d->die1+d->die2;
 cout<<"dice 1 is"<<d->die1<<"dice 2 is "<<d->die2<<". ";
 cout<<"Your move "<<step<<" steps."<<endl;
 game->LandingPlayer[who]->setPosition(step);
 cout<<"Now, you are in "<<game->map[game->LandingPlayer[who]->GetPosition()]->getname()<<"."<<endl;
 //helper function 这里 3种 1.是不是academic的 a)有owner 如有owner是自己 是不是垄断->要不要升级 如果不是自己交钱（check要交多少钱
 //b).没有owner的话 提示买不买 （要买多少钱） 2.是不是gym a)有owner 如有owner是自己 什么都不变 如果不是自己 安规则交钱（看pdf）
 //没有owner 提示买不买 （要买多少钱）3.是不是residence 同上 4.是不是osap 5.是不是go to tim 6.是不是加拿大鹅
 //7.叫不叫tuition 8.coop fee 9.slc rilegou 10. needle hall 11. slc nh cups problem
 }*/

void Controller::inDcTimLine(int i){
    bool run=true;
    while (run) {
        if (game->LandingPlayer[i]->getleave() == false){
            // cout <<"You can enter command:/trade/improve/mortgage/unmortgage/assets/save/exit"<<endl;
            //bool otherwayin = game->LandingPlayer[i]->otherwayin;
            //cout << " 这里这里"<<endl;
            if ((game->LandingPlayer[i]->GetPosition() == 10)&&(game->LandingPlayer[i]->otherwayin == true)) {  // This is the block of DC Tims Line
                int Timsturn=0;
                canroll = false;
                game->LandingPlayer[i]->changeNumTims(1);
                Timsturn = game->LandingPlayer[i]->getNumTims();
                if (Timsturn < 3) {
                    cout << "It's your "<< Timsturn << " time being in the DC Tims Line."<< endl <<
                    "If you want to leave, you must make choice: " << endl;
                    cout << "1. Roll a dice. You cannot leave the line unless you roll doubles!" << endl;
                    cout << "2. pay $50, then you can leave next time." << endl;
                    cout << "3. using a Roll Up the Rim cup, then you can leave next time." << endl;
                    cout << "Your choice is (1/2/3)?" << endl;
                    int choosenum=0;
                    cin >> choosenum;
                    while (true) {
                        if (choosenum == 1) {
                            if (testm) {
                                d->TDice();
                            } else{
                                d->rollDice();
                            }
                            d->printDice();
                            if(d->CheckDouble()==true){
                                game->LandingPlayer[i]->setleave(true);
                                //game->LandingPlayer[who]->setNumTims(0);
                                cout<< "You rolled double, you can leave next time. Please call next." << endl;
                                game->LandingPlayer[i]->otherwayin = false;
                                game->LandingPlayer[i]->setleave(true);
                                game->LandingPlayer[i]->setNumTims(0);
                                run=false;
                                break;
                            }else{
                                cout << "Sorry, you didn't roll double, so you cannot leave this time! Please call next." << endl;
                                //game->LandingPlayer[who]->changeNumTims(1);
                                game->LandingPlayer[i]->setleave(false);
                                //game->LandingPlayer[i]->setNumTims(0);
                                game->LandingPlayer[i]->setPosition(10);
                                game->LandingPlayer[i]->otherwayin = true;
                                other = false;
                                run=false;
                                break;
                            }
                        }else if(choosenum == 3){
                            if (game->LandingPlayer[i]->GetCups() == 0) {
                                cout << "You do not have any cup, you lose the chance of leaving the DC Tims Line This Time."<< endl;
                                game->LandingPlayer[i]->setleave(false);
                                game->LandingPlayer[i]->otherwayin = true;
                                game->LandingPlayer[i]->setPosition(10);
                                other = false;
                                run=false;
                                break;
                            }else{
                                game->LandingPlayer[i]->changeCups(-1);
                                game->LandingPlayer[i]->setleave(true);
                                cout<< "You can leave next time. Please call next." << endl;
                                game->LandingPlayer[i]->setNumTims(0);
                                game->LandingPlayer[i]->otherwayin = false;
                                //break;
                                run=false;
                                break;
                            }
                        }else{
                            if (game->LandingPlayer[i]->GetBalance() < 50){
                                cout << "You have to call bankrupt since you don't have enough money."<< endl;
                                game->LandingPlayer[i]->otherwayin = false;
                                game->LandingPlayer[i]->setleave(true);
                                game->LandingPlayer[i]->setNumTims(0);
                                //破产
                                //break;
                                run=false;
                                break;
                            }else{
                                game->LandingPlayer[i]->changeBalance(-50);
                                game->LandingPlayer[i]->changeassets(-50);
                                game->LandingPlayer[i]->setleave(true);
                                cout<< "You can leave next time. Please call next." << endl;
                                game->LandingPlayer[i]->setNumTims(0);
                                game->LandingPlayer[i]->otherwayin = false;
                                run=false;
                                break;
                            }
                        }
                    }
                }else{
                    if (testm) {
                        d->TDice();
                    } else{
                        d->rollDice();
                    }
                    int sum = d->die1 + d->die2;
                    if(d->die1 == d->die2){
                        game->LandingPlayer[i]->setleave(0);
                        game->LandingPlayer[i]->setNumTims(0);
                        cout<< "You can leave next time since you rolled double in your third turn in DC Tims Line." << endl;
                        game->LandingPlayer[i]->setNumTims(0);
                        game->LandingPlayer[i]->setleave(true);
                        game->LandingPlayer[i]->otherwayin = false;
                        break;
                    }else{
                        cout << "It's your third time in DC Tims Line and you didn't roll double just now."<< endl <<
                        "If you want to leave, you must make choice: " << endl;
                        cout << "1. pay $50, then move the sum of the dice from their last roll." << endl;
                        cout << "2. using a Roll Up the Rim cup, then move the sum of the dice from their last roll." << endl;
                        cout << "Your choice is (1/2)?" << endl;
                        int choosenum=0;
                        cin>> choosenum;
                        while (true) {
                            if (choosenum == 1) {
                                if (game->LandingPlayer[i]->GetBalance() < 50){
                                    cout << "You have to call bankrupt since you don't have enough money."<< endl;
                                    game->LandingPlayer[i]->otherwayin = false;
                                    game->LandingPlayer[i]->setleave(true);
                                    game->LandingPlayer[i]->setNumTims(0);
                                    run=false;
                                    break;
                                }else{
                                    game->LandingPlayer[i]->changeBalance(-50);
                                    game->LandingPlayer[i]->changeassets(-50);
                                    game->LandingPlayer[i]->setleave(true);
                                    game->LandingPlayer[i]->setNumTims(0);
                                    cout<< "You move forward " <<  sum <<" steps now." << endl;
                                    game->LandingPlayer[i]->changePosition(sum);
                                    game->LandingPlayer[i]->otherwayin = true;
                                    cleanLand(pl[10], game->LandingPlayer[i]->GetReprePiece());
                                    cout<<"Now, you are in "<<game->map[game->LandingPlayer[i]->GetPosition()]->getname()<<"."<<endl;
                                    
                                    return rollHelper(i);
                                }
                            }else{
                                if (game->LandingPlayer[i]->GetCups() == 0) {
                                    cout << "You do not have any cup, you must pay $50."<< endl;
                                    if (game->LandingPlayer[i]->GetBalance() < 50){
                                        cout << "You have to call bankrupt since you don't have enough money."<< endl;
                                        game->LandingPlayer[i]->otherwayin = false;
                                        game->LandingPlayer[i]->setleave(true);
                                        game->LandingPlayer[i]->setNumTims(0);
                                        run=false;
                                        break;
                                    }else{
                                        game->LandingPlayer[i]->changeBalance(-50);
                                        game->LandingPlayer[i]->changeassets(-50);
                                        game->LandingPlayer[i]->setleave(true);
                                        game->LandingPlayer[i]->setNumTims(0);
                                        cout<< "You move forward " <<  sum <<" steps now." << endl;
                                        game->LandingPlayer[i]->changePosition(sum);
                                        game->LandingPlayer[i]->otherwayin = false;
                                        cleanLand(pl[10], game->LandingPlayer[i]->GetReprePiece());
                                        cout<<"Now, you are in "<<game->map[game->LandingPlayer[i]->GetPosition()]->getname()<<"."<<endl;
                                        
                                        return rollHelper(i);
                                    }
                                }else{
                                    game->LandingPlayer[i]->changeCups(-1);
                                    game->LandingPlayer[i]->setleave(true);
                                    game->LandingPlayer[i]->setNumTims(0);
                                    game->LandingPlayer[i]->otherwayin = false;
                                    cout<< "You move forward " << sum <<" steps now." << endl;
                                    game->LandingPlayer[i]->changePosition(sum);
                                    cleanLand(pl[10], game->LandingPlayer[i]->GetReprePiece());
                                    cout<<"Now, you are in "<<game->map[game->LandingPlayer[i]->GetPosition()]->getname()<<"."<<endl;
                                    
                                    return rollHelper(i);
                                }
                            }
                        }
                    }
                }
            }
            //cout << "进来了"<< endl;
        }
        // game->LandingPlayer[i]->setleave(true);
        
        
    }
}







void Controller::cmd_roll(int who){
    
    while (canroll) { // and landposition != dc tims line
        int oldPosition = game->LandingPlayer[who]->GetPosition();
        cleanLand(pl[oldPosition], game->LandingPlayer[who]->GetReprePiece());
        if (testm) {
            d->TDice();
        } else{
            d->rollDice();
        }
        while (d->CheckDouble() == true) {  //这里的check可能是错的，
            check ++;
            if (check == 3) {
                cout << "You rolled double 3 times, you are senting to DC Tims Line." << endl;
                game->LandingPlayer[who]->setPosition(10);
                game->LandingPlayer[who]->setleave(false);
                game->LandingPlayer[who]->otherwayin = true;
                // otherwayin = true;
                //cout<<"Now, you are in "<<game->map[game->LandingPlayer[who]->GetPosition()]->getname()<<"."<<endl;
                //helper function for buildings
                //print the map
                canroll = false;
                check=0;
                game->LandingPlayer[who]->otherwayin = true;
                return inDcTimLine(who);
            } else{
                cout << "You rolled double, please roll again." << endl;
                return;
            }
        }
        check = 0;
        canroll=false;
        int step=d->die1+d->die2;
        d->printDice();
        cout<<"Your move "<<step<<" steps."<<endl;
        game->LandingPlayer[who]->changePosition(step);
        if (game->LandingPlayer[who]->GetPosition() != 10) {
            cout<<"Now, you are in "<< game->map[game->LandingPlayer[who]->GetPosition()]->getname()<<"."<<endl;
            return rollHelper(who);
        }else{
            return rollHelper(who);
        }
    }
    cout<<"You cannot roll again!" <<endl;
    return;
}





void Controller::rollHelper(int who){
    //game->map[landposition]->getname()
    int landposition=game->LandingPlayer[who]->GetPosition();
    //bool otherwayin = game->LandingPlayer[who]->otherwayin;
    bool IsAcademic = IsProperty(landposition, 22, academicPositon);
    bool IsGym = IsProperty(landposition, 2, gymPosition);
    bool IsResidence = IsProperty(landposition, 4, residencePostion);
    if ((IsAcademic == true) || (IsGym == true) || (IsResidence == true)){  //building is a property 检查是不是property
        //cout << game->map[landposition]->gethasOwener() << endl << endl;
        if(game->map[landposition]->gethasOwener() == false) {  //没有owner的情况
            cout<<"Do you want to buy this building? (y/n)"<<endl;
            char ins;
            cin >> ins;
            if (ins == 'y') {//检查破产
                double amount = 0;
                amount = game->map[landposition]->GetPurchaseCost();
                game->LandingPlayer[who]->changeBalance(- amount);
                //game->map[landposition]->changehasOwener();
                string buidName = game->map[landposition]->getname();
                game->LandingPlayer[who]->changeProperty(1, buidName);
                char newOwner = game->LandingPlayer[who]->GetReprePiece();
                string newOwnername = game->LandingPlayer[who]->GetWhoPlay();
                game->map[landposition]->changeOwner(newOwner);
                game->map[landposition]->setows(newOwnername);
                if (IsAcademic == true) {
                    cout << "Congratulations! You bought a new academic building!"<<endl;
                    if((landposition == 1)||(landposition == 3)){//arts1
                        if (game->map[1]->getOwner() == game->map[3]->getOwner()) {
                            game->map[1]->setmonopoly(true);
                            game->map[3]->setmonopoly(true);
                            cout <<"Congratulations! Arts1 is monopolistic" <<endl;
                            cout <<"Improvement level will show up on the map"<<endl;
                            printLevel(game->map[1]->Getismonoply(),mp[0], game->map[1]->GetLevel());
                            printLevel(game->map[3]->Getismonoply(),mp[1], game->map[3]->GetLevel());
                            
                            //   cout << "XXXX" <<game->map[1]->GetLevel() <<endl;
                            // cout << "XXXX" <<game->map[3]->GetLevel() <<endl;
                        }
                    }
                    if((landposition == 6)||(landposition == 8)||(landposition == 9)){ //arts2
                        if ((game->map[6]->getOwner() == game->map[8]->getOwner())&&
                            (game->map[8]->getOwner() == game->map[9]->getOwner())){
                            game->map[6]->setmonopoly(true);
                            game->map[8]->setmonopoly(true);
                            game->map[9]->setmonopoly(true);
                            cout <<"Congratulations! Arts2 is monopolistic" <<endl;
                            cout <<"Improvement level will show up on the map"<<endl;
                            printLevel(game->map[6]->Getismonoply(),mp[2], game->map[6]->GetLevel());
                            printLevel(game->map[8]->Getismonoply(),mp[3], game->map[8]->GetLevel());
                            printLevel(game->map[9]->Getismonoply(),mp[4], game->map[9]->GetLevel());
                            
                        }
                    }
                    if((landposition == 11)||(landposition == 13)||(landposition == 14)){//eng
                        if ((game->map[11]->getOwner() == game->map[13]->getOwner())&&
                            (game->map[13]->getOwner() == game->map[14]->getOwner())){
                            game->map[11]->setmonopoly(true);
                            game->map[13]->setmonopoly(true);
                            game->map[14]->setmonopoly(true);
                            cout <<"Congratulations! Eng is monopolistic" <<endl;
                            cout <<"Improvement level will show up on the map"<<endl;
                            
                            printLevel(game->map[11]->Getismonoply(),mp[5], game->map[11]->GetLevel());
                            printLevel(game->map[13]->Getismonoply(),mp[6], game->map[13]->GetLevel());
                            printLevel(game->map[14]->Getismonoply(),mp[7], game->map[14]->GetLevel());
                            
                        }
                    }
                    if((landposition == 16)||(landposition == 18)||(landposition == 19)){//health
                        if ((game->map[16]->getOwner() == game->map[18]->getOwner())&&
                            (game->map[18]->getOwner() == game->map[19]->getOwner())){
                            game->map[16]->setmonopoly(true);
                            game->map[18]->setmonopoly(true);
                            game->map[19]->setmonopoly(true);
                            cout <<"Congratulations! Health is monopolistic" <<endl;
                            cout <<"Improvement level will show up on the map"<<endl;
                            printLevel(game->map[16]->Getismonoply(),mp[8], game->map[16]->GetLevel());
                            printLevel(game->map[18]->Getismonoply(),mp[9], game->map[18]->GetLevel());
                            printLevel(game->map[19]->Getismonoply(),mp[10], game->map[19]->GetLevel());
                            
                        }
                    }
                    if((landposition == 21)||(landposition == 23)||(landposition == 24)){//Env
                        if ((game->map[21]->getOwner() == game->map[23]->getOwner())&&
                            (game->map[23]->getOwner() == game->map[24]->getOwner())){
                            game->map[21]->setmonopoly(true);
                            game->map[23]->setmonopoly(true);
                            game->map[24]->setmonopoly(true);
                            cout <<"Congratulations! Env is monopolistic" <<endl;
                            cout <<"Improvement level will show up on the map"<<endl;
                            printLevel(game->map[21]->Getismonoply(),mp[11], game->map[21]->GetLevel());
                            printLevel(game->map[23]->Getismonoply(),mp[12], game->map[23]->GetLevel());
                            printLevel(game->map[24]->Getismonoply(),mp[13], game->map[24]->GetLevel());
                        }
                    }
                    if((landposition == 26)||(landposition == 27)||(landposition == 29)){//Sci1
                        if ((game->map[26]->getOwner() == game->map[27]->getOwner())&&
                            (game->map[27]->getOwner() == game->map[29]->getOwner())){
                            game->map[26]->setmonopoly(true);
                            game->map[27]->setmonopoly(true);
                            game->map[29]->setmonopoly(true);
                            cout <<"Congratulations! Sci1 is monopolistic" <<endl;
                            cout <<"Improvement level will show up on the map"<<endl;
                            printLevel(game->map[26]->Getismonoply(),mp[14], game->map[26]->GetLevel());
                            printLevel(game->map[27]->Getismonoply(),mp[15], game->map[27]->GetLevel());
                            printLevel(game->map[29]->Getismonoply(),mp[16], game->map[29]->GetLevel());
                            
                        }
                    }
                    if((landposition == 31)||(landposition == 32)||(landposition == 34)){//Sci2
                        if ((game->map[31]->getOwner() == game->map[32]->getOwner())&&
                            (game->map[32]->getOwner() == game->map[34]->getOwner())){
                            game->map[31]->setmonopoly(true);
                            game->map[32]->setmonopoly(true);
                            game->map[34]->setmonopoly(true);
                            cout <<"Congratulations! Sci2 is monopolistic" <<endl;
                            cout <<"Improvement level will show up on the map"<<endl;
                            printLevel(game->map[31]->Getismonoply(),mp[17], game->map[31]->GetLevel());
                            printLevel(game->map[32]->Getismonoply(),mp[18], game->map[32]->GetLevel());
                            printLevel(game->map[34]->Getismonoply(),mp[19], game->map[34]->GetLevel());
                            
                        }
                    }
                    if((landposition == 37)||(landposition == 39)){//Math
                        if (game->map[37]->getOwner() == game->map[39]->getOwner()) {
                            game->map[37]->setmonopoly(true);
                            game->map[39]->setmonopoly(true);
                            cout <<"Congratulations! Math is monopolistic" <<endl;
                            cout <<"Improvement level will show up on the map"<<endl;
                            printLevel(game->map[37]->Getismonoply(),mp[20], game->map[37]->GetLevel());
                            printLevel(game->map[39]->Getismonoply(),mp[21], game->map[39]->GetLevel());
                            
                        }
                    }
                }
                if(IsGym == true){
                    game->LandingPlayer[who]->changeOwnGym(1);
                    cout << "Congratulations! You bought a new gym!"<<endl;
                }
                if(IsResidence == true){
                    game->LandingPlayer[who]->changeOwnResidence(1);
                    cout << "Congratulations! You bought a new residence!"<<endl;
                }
                game->map[landposition]->sethasOwener(true);
                
                // cout << game->map[landposition]->gethasOwener() << endl << endl;
            }else{
                cout << "Alright, we will auction this property" << endl;
                aution(game->LandingPlayer[who], game->getBuilding(getNb(landposition)));
                //这里将要插入拍卖的算法！！
            }
            // returning
            return;
        }else{  //有owner的情况
            if (game->map[landposition]->getOwner() == game->LandingPlayer[who]->GetReprePiece()) {//owner 是自己；
                if (IsAcademic == true) {
                    //判断是否垄断
                    if (game->map[landposition]->Getismonoply() == true) {//垄断的helper
                        if ((game->map[landposition]->GetLevel()) < 5) {
                            cout << "Do you wanna improve your property? If yes, you need to call the command: improve " << endl;
                            return;
                        }else {
                            cout << "Your property is full level" << endl;
                        }
                    }else{
                        cout << "Alright, that's your property. However, you don't own all the properties in a monopoly. So you don't need to do anything." << endl;
                    }
                }else{
                    cout << "Alright, that's your property. But you don't needa do anything." << endl;
                }
                return;
            }else {  //Owner 不是自己的情况
                
                //mortgage后不用收钱的情况！
                //破产的情况
                int fee;
                char landOwner = game->map[landposition]->getOwner();
                if (IsAcademic == true) {
                    //double fee1;
                    if (game->map[landposition]->GetLevel() == -1) {
                        fee = 0;
                    } else{
                        fee = game->map[landposition]->GetTuitionWImprove();
                    }
                    game->LandingPlayer[who]->changeBalance(-fee);
                    game->LandingPlayer[who]->changeassets(-fee);
                    // char landOwner = game->map[landposition]->getOwner();
                    game->getPlayer(landOwner)->changeBalance(fee);
                    game->getPlayer(landOwner)->changeassets(fee);
                    cout << "You paid $"<< fee << " to "<< landOwner <<" who is the owner of the academic building." << endl;
                }
                else if (IsGym == true) {
                    //double fee;
                    int sum = d->Sum();
                    int ownedGyms = game->getPlayer(landOwner)->GetOwnGym();
                    if (ownedGyms == 1){
                        if (game->map[landposition]->GetLevel() == -1) {
                            fee = 0;
                        } else{
                            fee = sum * 4;
                        }
                        game->LandingPlayer[who]->changeBalance(-fee);
                        game->LandingPlayer[who]->changeassets(-fee);
                        game->getPlayer(landOwner)->changeBalance(fee);
                        game->getPlayer(landOwner)->changeassets(fee);
                        cout << "You must pay 4 times the sum of the dice,which is $"<< fee << " to "<< landOwner <<" who is the owner of the gym." << endl;
                    }
                    if(ownedGyms == 2){
                        if (game->map[landposition]->GetLevel() == -1) {
                            fee = 0;
                        } else{
                            fee = sum * 10;
                        }
                        game->LandingPlayer[who]->changeBalance(-fee);
                        game->LandingPlayer[who]->changeassets(-fee);
                        game->getPlayer(landOwner)->changeBalance(fee);
                        game->getPlayer(landOwner)->changeassets(fee);
                        cout << "You must pay 10 times the sum of the dice,which is $"<< fee << " to "<< landOwner <<" who is the owner of the gym." << endl;
                    }
                    
                }else if(IsResidence == true) {
                    // double fee3;
                    int ownedResidences = game->getPlayer(landOwner)->GetOwnResidence();
                    if (ownedResidences == 1) {
                        fee = 25;
                    }else if(ownedResidences == 2){
                        fee = 50;
                    }else if(ownedResidences == 3){
                        fee = 100;
                    }else{
                        fee = 200;
                    }
                    if (game->map[landposition]->GetLevel() == -1) {
                        fee = 0;
                    }
                    game->LandingPlayer[who]->changeBalance(-fee);
                    
                    game->LandingPlayer[who]->changeassets(-fee);
                    game->getPlayer(landOwner)->changeBalance(fee);
                    game->getPlayer(landOwner)->changeassets(fee);
                    cout << "You must pay $"<< fee << " to "<< landOwner <<" who is the owner of the residence." << endl;
                }
            }
            return;
        }
    }else{ //non property 的情况
        //debug
        //cout<< IsAcademic << " "<< IsResidence << " "<< IsGym<<" "<<landposition <<endl;
        //cout<<"asjkdhaskjhdaksjdhakjdbaskjda"<<endl;
        if (landposition == 0) {  //This is the block of OSAP
            game->LandingPlayer[who]->changeBalance(200);
            game->LandingPlayer[who]->changeassets(200);
            cout << "Congratulations! You collected $200!"<< endl;
            return;
        }
        if(landposition == 4){  //this is the block of Tuition
            cout << "Please choose: 1.paying $300 tuition. 2.paying 10% of your total worth."<< endl
            << "Enter 1 or 2:" << endl;
            int num;
            cin >> num;
            if (num == 1) {
                game->LandingPlayer[who]->changeBalance(-300);
                game->LandingPlayer[who]->changeassets(-300);
                cout << "Thank you, you paid $300 to the school." << endl;
            }
            if (num == 2) {
                double amount = game->LandingPlayer[who]->getassets()*0.1; //0 改为总资产*0.1
                game->LandingPlayer[who]->changeBalance(-amount);
                game->LandingPlayer[who]->changeassets(-amount);
                cout << "Thank you, you paid $" << amount << " to the school." << endl;
                //这个时候总资产的command是不能call的
                
            }
            return;
        }
        if ((landposition == 7)||(landposition == 22)||(landposition == 36)) { //This is the block of NH
            if ((Cups <= TotalCups)&&(Cups >= 0)) {
                if (d->getCups() == 1) {
                    game->LandingPlayer[who]->changeCups(1);
                    Cups += 1;
                    cout << "Congratulations! You get a new cup." << endl;
                } else{
                    if (d->getNh() == 1){
                        game->LandingPlayer[who]->changeBalance(-200);
                        game->LandingPlayer[who]->changeassets(-200);
                        cout << "you lose $200" << endl;
                    } else if ((d->getNh() == 2) || (d->getNh() == 3)) {
                        game->LandingPlayer[who]->changeBalance(-100);
                        game->LandingPlayer[who]->changeassets(-100);
                        cout << "you lose $100" << endl;
                    } else if ((d->getNh() == 4) || (d->getNh() == 5) || (d->getNh() == 6)) {
                        game->LandingPlayer[who]->changeBalance(-50);
                        game->LandingPlayer[who]->changeassets(-50);
                        cout << "you lose $50" << endl;
                    } else if ((d->getNh() == 7) || (d->getNh() == 8) || (d->getNh() == 9) || (d->getNh() == 10) || (d->getNh() == 11) || (d->getNh() == 12)) {
                        game->LandingPlayer[who]->changeBalance(25);
                        game->LandingPlayer[who]->changeassets(25);
                        cout << "you gain $25" << endl;
                    } else if ((d->getNh() == 13) || (d->getNh() == 14) || (d->getNh() == 15)){
                        game->LandingPlayer[who]->changeBalance(50);
                        game->LandingPlayer[who]->changeassets(50);
                        cout << "you gain $50" << endl;
                    } else if ((d->getNh() == 16) || (d->getNh() == 17)) {
                        game->LandingPlayer[who]->changeBalance(100);
                        game->LandingPlayer[who]->changeassets(100);
                        cout << "you gain $100" << endl;
                    } else {
                        game->LandingPlayer[who]->changeBalance(200);
                        game->LandingPlayer[who]->changeassets(200);
                        cout << "you gain $200" << endl;
                    }
                }
                return;
            } else {
                if (d->getNh() == 1){
                    game->LandingPlayer[who]->changeBalance(-200);
                    game->LandingPlayer[who]->changeassets(-200);
                    cout << "you lose $200" << endl;
                } else if ((d->getNh() == 2) || (d->getNh() == 3)) {
                    game->LandingPlayer[who]->changeBalance(-100);
                    game->LandingPlayer[who]->changeassets(-100);
                    cout << "you lose $100" << endl;
                } else if ((d->getNh() == 4) || (d->getNh() == 5) || (d->getNh() == 6)) {
                    game->LandingPlayer[who]->changeBalance(-50);
                    game->LandingPlayer[who]->changeassets(-50);
                    cout << "you lose $50" << endl;
                } else if ((d->getNh() == 7) || (d->getNh() == 8) || (d->getNh() == 9) || (d->getNh() == 10) || (d->getNh() == 11) || (d->getNh() == 12)) {
                    game->LandingPlayer[who]->changeBalance(25);
                    game->LandingPlayer[who]->changeassets(25);
                    cout << "you gain $25" << endl;
                } else if ((d->getNh() == 13) || (d->getNh() == 14) || (d->getNh() == 15)){
                    game->LandingPlayer[who]->changeBalance(50);
                    game->LandingPlayer[who]->changeassets(50);
                    cout << "you gain $50" << endl;
                } else if ((d->getNh() == 16) || (d->getNh() == 17)) {
                    game->LandingPlayer[who]->changeBalance(100);
                    game->LandingPlayer[who]->changeassets(100);
                    cout << "you gain $100" << endl;
                } else {
                    game->LandingPlayer[who]->changeBalance(200);
                    game->LandingPlayer[who]->changeassets(200);
                    cout << "you gain $200" << endl;
                }
            }
            return;
        }
        
        
        if ((landposition == 10)&&(game->LandingPlayer[who]->otherwayin == false)) {  //land 到DC Tims Line的情况
            cout << "You are landing in the DC Tims Line."<< endl;
            cout << "Nothing happened."<<endl;
            //game->LandingPlayer[who]->changeNumTims(1);
        }
        
        if ((landposition == 10)&&(game->LandingPlayer[who]->otherwayin == true)) {  // This is the block of DC Tims Line
            //cout << "有没有进来啊"<<endl;
            game->LandingPlayer[who]->setleave(false);
            return inDcTimLine(who);
        }
        
        if (landposition == 30) { //This is the block of go to Tims
            cout << "You are sending to the DC Tims Line." << endl;
            game->LandingPlayer[who]->setleave(false);
            game->LandingPlayer[who]->setPosition(10);
            game->LandingPlayer[who]->otherwayin = true;
            return rollHelper(who);
        }
        if (landposition == 20) {  //This is the block of geese
            cout << "Oops, you are attacked by a flock of nesting geese!"<< endl;
            cout << "Unfortunately, you cannot do anything because they are too strong."<< endl;
            cout << "        _———_              "<< endl;
            cout << "       /  @  \\            "<< endl;
            cout << "     <==_    |            "<< endl;
            cout << "        \\   /            "<< endl;
            cout << "         |  \\__          "<< endl;
            cout << "        /      ---___     "<< endl;
            cout << "       /     =^^^^-__--/     __      "<< endl;
            cout << "       |           _^^/   _/ o \\     "<< endl;
            cout << "        \\_______--^-/      \\   |_+_            "<< endl;
            cout << "         \\________/        /    /  _+          "<< endl;
            cout << "          _|_ _|_          \\_____+-   "<< endl;
            cout << "           *   *             # #       "<< endl;
            
            //cout << "It's better to run away next time" << endl;
            //可以考虑再画个鹅
            return;
        }
        if (landposition == 38) { //This is the block of coop fee
            game->LandingPlayer[who]->changeBalance(-150);
            game->LandingPlayer[who]->changeassets(- 150);
            cout << "You have paid $150 to the school" << endl;
            return;
        }
        if ((landposition == 2)||(landposition == 17)||(landposition == 33)) {//This is the block of SLC
            int slcNum = d->getSlc();
            string buidName;
            
            if ((slcNum == 1) || (slcNum == 2) || (slcNum == 3 )){
                
                if (landposition == 2) {
                    game->LandingPlayer[who]->setPosition(39);
                } else{
                    game->LandingPlayer[who]->changePosition(-3);
                }
                landposition = game->LandingPlayer[who]->GetPosition();
                buidName = game->map[landposition]->getname();
                cout << "You move back 3 steps" << endl;
                cout << "Now you are at "<< buidName << endl;
                return rollHelper(who);
            } else if((slcNum == 4) || (slcNum == 5) || (slcNum == 6) || (slcNum == 7)){
                game->LandingPlayer[who]->changePosition(-2);
                landposition = game->LandingPlayer[who]->GetPosition();
                buidName = game->map[landposition]->getname();
                cout << "You move back 2 steps" << endl;
                cout << "Now you are at "<< buidName << endl;
                return rollHelper(who);
                
            } else if((slcNum == 8) || (slcNum == 9) || (slcNum == 10) || (slcNum == 11)){
                game->LandingPlayer[who]->changePosition(-1);
                landposition = game->LandingPlayer[who]->GetPosition();
                buidName = game->map[landposition]->getname();
                cout << "You move back 1 step" << endl;
                cout << "Now you are at "<< buidName << endl;
                return rollHelper(who);
                
            } else if((slcNum == 12) || (slcNum == 13) || (slcNum == 14)){
                game->LandingPlayer[who]->changePosition(1);
                landposition = game->LandingPlayer[who]->GetPosition();
                buidName = game->map[landposition]->getname();
                cout << "You move forward 1 step" << endl;
                cout << "Now you are at "<< buidName << endl;
                return rollHelper(who);
                
            } else if((slcNum == 15) || (slcNum == 16) || (slcNum == 17) || (slcNum == 18)){
                game->LandingPlayer[who]->changePosition(2);
                landposition = game->LandingPlayer[who]->GetPosition();
                buidName = game->map[landposition]->getname();
                cout << "You move forward 2 steps" << endl;
                cout << "Now you are at "<< buidName << endl;
                return rollHelper(who);
                
            } else if((slcNum == 19) || (slcNum == 20) || (slcNum == 21) || (slcNum == 22)) {
                
                game->LandingPlayer[who]->changePosition(3);
                landposition = game->LandingPlayer[who]->GetPosition();
                buidName = game->map[landposition]->getname();
                cout << "You move forward 3 steps" << endl;
                cout << "Now you are at "<< buidName << endl;
                return rollHelper(who);
                
            } else if (slcNum == 23) {
                
                cout << "You are sending to the DC Tims Line" << endl;
                game->LandingPlayer[who]->otherwayin = true;
                game->LandingPlayer[who]->setleave(true);
                game->LandingPlayer[who]->setPosition(10);
                game->LandingPlayer[who]->otherwayin = true;
                //cout << "Now, you are in the DC Tims Line square" << endl;
                return rollHelper(who);
                
            } else {
                
                printLand(pl[0], game->LandingPlayer[who]->GetReprePiece());
                game->LandingPlayer[who]->setPosition(0);
                cout << "You are sending to Collect OSAP" << endl;
                //cout << "Now,  you are in the Collect OSAP square" << endl;
                return;
            }
            return;
        }
    }
}



void Controller::cmd_trade(int who){//adding gym and residence checking
    string tradername;
    string give;
    string receive;
    cin>>tradername;
    cin>>give;
    cin>>receive;
    istringstream ss1(give);
    istringstream ss2(receive);
    int m1;
    int m2;
    if (tradername==game->LandingPlayer[who]->GetWhoPlay()) {
        cout<<"You cannot trade with youself!"<<endl;
        cout<<"Trade Rejected!"<<endl;
        return;
    } else{
        bool ifexist=false;
        long plen=game->LandingPlayer.size();
        for (int i=0; i<plen; i++) {
            if (game->LandingPlayer[i]->GetWhoPlay()==tradername) {
                ifexist=true;
                break;
            }
        }
        if (!ifexist){
            cout<<"Player "<<tradername<<" does not exist, please try another trade."<<endl;
            return;
        }
        istringstream ss1c(give);
        istringstream ss2c(receive);
        int m1c,m2c;
        bool gi;
        bool re;
        //check give or receive is number or not
        if (ss1c>>m1c){
            gi=true;
        } else {
            gi=false;
        }
        if (ss2c>>m2c) {
            re=true;
        } else{
            re=false;
        }
        //
        Player *trader=game->getnPlayer(tradername);
        //debug
        //cout<<trader->GetWhoPlay()<<endl<<endl;
        //cout<<tradername<<endl;
        //
        if (!gi && !re) {// first property to property
            //debug
            //cout<<"property to property"<<endl;
            //
            if (game->LandingPlayer[who]->check_property(give)==false) {
                //debug
                //cout<<"shittiinggggggg1"<<endl;
                //
                cout<<game->LandingPlayer[who]->GetWhoPlay()<<" you don't have property: "<<give<<"."<<endl;
                cout<<"Trade Rejected!"<<endl;
                return;
            } else if (trader->check_property(receive)==false){
                //debug
                //cout<<tradername<<endl;
                //cout<<game->LandingPlayer[who]->GetWhoPlay()<<endl;
                //cout<<trader->GetWhoPlay()<<endl;
                //cout<<"shittiinggggggg2"<<endl;
                //
                cout<<trader->GetWhoPlay()<<" doesn't have property: "<<receive<<"."<<endl;
                cout<<"Trade Rejected!"<<endl;
                return;
            } else{
                if (game->getBuilding(give)->getimprovement()!=0){
                    cout<<give<<" has improment which is not 0."<<endl;
                    cout<<"Trade Rejected!"<<endl;
                    return;
                } else if (game->getBuilding(receive)->getimprovement()!=0){
                    cout<<receive<<" has improment which is not 0."<<endl;
                    cout<<"Trade Rejected!"<<endl;
                    return;
                } else if (!checkmbhasi(give) && Isab(give)){
                    cout<<give<<" in monopoly block which has other property has improvement is not 0. or its not academic building."<<endl;
                    cout<<"Trade Rejected!"<<endl;
                    return;
                } else if (!checkmbhasi(receive) &&Isab(receive)){
                    cout<<receive<<" in monopoly block which has other property has improvement is not 0. or its not academic building."<<endl;
                    cout<<"Trade Rejected!"<<endl;
                    return;
                } else{
                    cout<<trader->GetWhoPlay()<<" do you want to exchange "<<receive<<" for "<<give<<"? (Y/N)"<<endl;
                    string hahaha;
                    cin>>hahaha;
                    if (hahaha=="N") {
                        cout<<"Sorry "<<trader->GetWhoPlay()<<" doesn't want to this trade."<<endl;
                        cout<<"Trade cannot be completed"<<endl;
                        return;
                    } else{//monopoly 改变待会儿再加
                        Building *pp1=game->getBuilding(give);
                        Building *pp2=game->getBuilding(receive);
                        double mpp1=pp1->GetPurchaseCost();
                        double mpp2=pp2->GetPurchaseCost();
                        //debug
                        //cout<<pp1->getname()<< "   "<<pp1->getOwner()<<endl;
                        //cout<<pp1->getname()<< "   "<<pp1->getows()<<endl;
                        //cout<<pp2->getname()<< "   "<<pp2->getOwner()<<endl;
                        //cout<<pp2->getname()<< "   "<<pp2->getows()<<endl;
                        //asdkjhaskjdhakjhsdkahdkjashda
                        pp1->setows(trader->GetWhoPlay());
                        pp1->changeOwner(trader->GetReprePiece());
                        pp2->setows(game->LandingPlayer[who]->GetWhoPlay());
                        pp2->changeOwner(game->LandingPlayer[who]->GetReprePiece());
                        //debug
                        //cout<<pp1->getname()<< "   "<<pp1->getOwner()<<endl;
                        //cout<<pp1->getname()<< "   "<<pp1->getows()<<endl;
                        //cout<<pp2->getname()<< "   "<<pp2->getOwner()<<endl;
                        //cout<<pp2->getname()<< "   "<<pp2->getows()<<endl;
                        //ashjdkashkashkjash
                        if (Isr(pp1->getname())) {
                            game->LandingPlayer[who]->changeOwnResidence(-1);
                            trader->changeOwnResidence(1);
                        }
                        if (Isr(pp2->getname())) {
                            game->LandingPlayer[who]->changeOwnResidence(1);
                            trader->changeOwnResidence(-1);
                        }
                        if (Isg(pp1->getname())) {
                            game->LandingPlayer[who]->changeOwnGym(-1);
                            trader->changeOwnGym(1);
                        }
                        if (Isg(pp2->getname())) {
                            game->LandingPlayer[who]->changeOwnGym(1);
                            trader->changeOwnGym(-1);
                        }
                        //
                        game->LandingPlayer[who]->changeProperty(-1, give);
                        game->LandingPlayer[who]->changeProperty(1, receive);
                        game->LandingPlayer[who]->changeassets(-mpp1+mpp2);
                        trader->changeProperty(-1, receive);
                        trader->changeProperty(1, give);
                        trader->changeassets(-mpp2+mpp1);
                        int who1=0;
                        for (int i=0; i<totalplayers; i++,who1++) {
                            if (game->LandingPlayer[i]->GetWhoPlay()==trader->GetWhoPlay()) {
                                break;
                            }
                        }
                        IsMonopoly(who1);
                        IsMonopoly(who);
                    }
                }
            }
        } else if (gi && !re){//second money for property
            ss1>>m1;
            if (game->LandingPlayer[who]->GetBalance()<m1) {
                cout<<game->LandingPlayer[who]->GetWhoPlay()<<" you don't have enough balance"<<endl;
                cout<<"Trade Rejected"<<endl;
                return;
            } else{
                if (trader->check_property(receive)==false){
                    cout<<trader->GetWhoPlay()<<" has no property: "<<receive<<endl;
                    cout<<"Trade Rejected"<<endl;
                    return;
                } else if(game->getBuilding(receive)->GetLevel()!=0){
                    cout<<receive<<" has improment which is not 0."<<endl;
                    cout<<"Trade Rejected!"<<endl;
                    return;
                } else if (!checkmbhasi(receive) && Isab(receive)){
                    cout<<receive<<" in monopoly block which has other property has improvement is not 0. or its not academic building."<<endl;
                    cout<<"Trade Rejected!"<<endl;
                    return;
                } else{
                    cout<<trader->GetWhoPlay()<<" do you want to get "<<m1<<" bucks for exchanging your property: "<<receive<<" ? (Y/N)"<<endl;
                    string temp1;
                    cin>>temp1;
                    if (temp1=="N") {
                        cout<<"Sorry "<<trader->GetWhoPlay()<<" doesn't want to this trade."<<endl;
                        cout<<"Trade cannot be completed"<<endl;
                        return;
                    } else{//monopoly 改变待会儿再加
                        Building *mp=game->getBuilding(receive);
                        double mpm=mp->GetPurchaseCost();
                        //
                        mp->changeOwner(game->LandingPlayer[who]->GetReprePiece());
                        mp->setows(game->LandingPlayer[who]->GetWhoPlay());
                        //
                        //
                        if (Isr(receive)) {
                            game->LandingPlayer[who]->changeOwnResidence(1);
                            trader->changeOwnResidence(-1);
                        }
                        if (Isg(receive)) {
                            game->LandingPlayer[who]->changeOwnGym(1);
                            trader->changeOwnGym(-1);
                        }
                        //
                        game->LandingPlayer[who]->changeBalance(-m1);
                        game->LandingPlayer[who]->changeassets(-m1+mpm);
                        game->LandingPlayer[who]->changeProperty(1, receive);
                        trader->changeProperty(-1, receive);
                        trader->changeBalance(m1);
                        trader->changeassets(m1-mpm);
                        IsMonopoly(who);
                        int who2=0;
                        for (int i=0; i<totalplayers; i++,who2++) {
                            if (game->LandingPlayer[i]->GetWhoPlay()==trader->GetWhoPlay()) {
                                break;
                            }
                        }
                        IsMonopoly(who2);
                    }
                }
            }
            
        } else if (!gi && re){//third property to money
            ss2>>m2;
            if (trader->GetBalance()<m2) {
                cout<<trader->GetWhoPlay()<<" you don't have enough balance"<<endl;
                cout<<"Trade Rejected"<<endl;
                return;
            } else if (game->LandingPlayer[who]->check_property(give)==false){
                cout<<game->LandingPlayer[who]->GetWhoPlay()<<" has no property: "<<give<<"."<<endl;
                cout<<"Trade Rejected!"<<endl;
                return;
            } else if (game->getBuilding(give)->GetLevel()!=0){
                cout<<give<<" has improment which is greater than 0."<<endl;
                cout<<"Trade Rejected!"<<endl;
                return;
            } else if (!checkmbhasi(give) && Isab(give)){
                cout<<give<<" in monopoly block which has other property has improvement is not 0. or its not academic building."<<endl;
                cout<<"Trade Rejected!"<<endl;
                return;
            } else{
                cout<<trader->GetWhoPlay()<<" do you want pay "<<m2<<" bucks for buying "<<give<<". (Y/N)"<<endl;
                string heihei;
                cin>>heihei;
                if (heihei=="N") {
                    cout<<"Sorry "<<trader->GetWhoPlay()<<" doesn't want to this trade."<<endl;
                    cout<<"Trade cannot be completed"<<endl;
                    return;
                } else{//monopoly 改变待会儿再加
                    Building *pm=game->getBuilding(give);
                    double m3=pm->GetPurchaseCost();
                    //
                    pm->changeOwner(trader->GetReprePiece());
                    pm->setows(trader->GetWhoPlay());
                    //
                    if (Isr(give)) {
                        trader->changeOwnResidence(1);
                        game->LandingPlayer[who]->changeOwnResidence(-1);
                    }
                    if (Isg(give)) {
                        trader->changeOwnGym(1);
                        game->LandingPlayer[who]->changeOwnGym(-1);
                    }
                    //
                    game->LandingPlayer[who]->changeBalance(m2);
                    game->LandingPlayer[who]->changeProperty(-1, give);
                    game->LandingPlayer[who]->changeassets(-m3+m2);
                    trader->changeProperty(1, give);
                    trader->changeBalance(-m2);
                    trader->changeassets(-m2+m3);
                    IsMonopoly(who);
                    int who3=0;
                    for (int i=0; i<totalplayers; i++,who3++) {
                        if (game->LandingPlayer[i]->GetWhoPlay()==trader->GetWhoPlay()) {
                            break;
                        }
                    }
                    IsMonopoly(who3);
                }
            }
        } else{//fouth money for money
            cout<<"You cannot trade money for money"<<endl;
            cout<<"Trade Rejected"<<endl;
            return;
        }
    }
}



void Controller::cmd_improve(int who){
    int i=0;
    string bname;
    cin>>bname;
    string cmd;
    cin>>cmd;
    for (; i<40; i++) {
        if (game->map[i]->getname()==bname) {
            break;
        }
    }
    if (!Isab(bname)) {
        cout<<"This is not a Academic building so no improvement!"<<endl;
        return;
    } else{
        if (game->LandingPlayer[who]->check_property(bname)==false){
            cout<<"You don't own this property, so you cannot improve it"<<endl;
            return;
        } else if (!game->map[i]->Getismonoply()) {//check 垄断
            cout<<game->LandingPlayer[who]->GetWhoPlay()<<" you do not own the block to improve."<<endl;
            return;
        } else if (game->map[i]->getmortgate()){//是不是mortgage
            cout<<"Your property is mortgaged building so cannot improve it"<<endl;
            return;
        } else{
            int oldlv=game->map[i]->GetLevel();
            //double curbal=game->LandingPlayer[who]->GetBalance();
            if (cmd=="buy") {
                if (oldlv==5) {
                    cout<<"Your property is full level so you cannot improve it."<<endl;
                    return;
                } else{
                    game->map[i]->changelevel(oldlv+1);
                    cout<<"Your property is improved and now you level of property: "<<game->map[i]->GetLevel()<<"."<<endl;
                    double charge=game->map[i]->GetImproveCost();
                    game->LandingPlayer[who]->changeBalance(-charge);
                    // assets
                    IsMonopoly(who);
                    
                    return;
                }
            } else if (cmd=="sell"){
                if (oldlv==0) {
                    cout<<"Your property is 0 level so you cannot sell it"<<endl;
                    return;
                } else{
                    game->map[i]->changelevel(oldlv-1);
                    cout<<"Your property is decreased and now your level of property: "<<game->map[i]->GetLevel()<<endl;
                    double charge1=game->map[i]->GetImproveCost();
                    charge1=charge1/2;
                    game->LandingPlayer[who]->changeassets(-charge1);
                    game->LandingPlayer[who]->changeBalance(charge1);
                    
                    IsMonopoly(who);
                    // assets
                    return;
                }
            } else{
                cout<<"Invalid Command"<<endl;
                return;
            }
        }
    }
}




void Controller::cmd_mortgage(int who){
    string pp;
    cin>>pp;
    if (Isab(pp)) {
        if (game->getBuilding(pp)->GetLevel()==-1) {
            cout<<"This building is already mortgaged."<<endl;
            return;
        } else if (game->getBuilding(pp)->GetLevel()!=0){
            cout<<"This building's improvement is not 0 so it cannot mortgage."<<endl;
            return;
        } else{
            game->getBuilding(pp)->changelevel(-1);
            double change1=game->getBuilding(pp)->GetPurchaseCost();
            change1=change1/2;
            game->LandingPlayer[who]->changeBalance(change1);
            game->getBuilding(pp)->changemortgate(true);
            cout<<"You mortgaged this building"<<endl;
            return;
        }
    } else if(Isr(pp)){
        if (game->getBuilding(pp)->getimprovement()==-1) {
            cout<<"This building is already mortgaged."<<endl;
            return;
        } else{
            game->getBuilding(pp)->changemortgate(true);
            game->getBuilding(pp)->setRimprovement(-1);
            game->LandingPlayer[who]->changeBalance(100);
            //add assets
            cout<<"This building is mortgaged."<<endl;
        }
    } else if (Isg(pp)){
        if (game->getBuilding(pp)->getimprovement()==-1) {
            cout<<"This building is already mortgaged."<<endl;
            return;
        } else{
            game->getBuilding(pp)->changemortgate(true);
            game->LandingPlayer[who]->changeBalance(75);
            game->getBuilding(pp)->setRimprovement(-1);
            //add assets
            cout<<"This building is mortgaged."<<endl;
        }
    } else {
        cout<<"Invaild property to mortgage"<<endl;
        return;
    }
}



void Controller::cmd_unmortgage(int who){
    string pp;
    cin>>pp;
    double curbal=game->LandingPlayer[who]->GetBalance();
    if (Isab(pp)) {
        double charge1=game->getBuilding(pp)->GetPurchaseCost();
        double chargea=charge1*.1;
        charge1=charge1*.6;
        if (game->getBuilding(pp)->GetLevel()!=-1) {
            cout<<"This property is not mortgaged."<<endl;
            return;
        } else if (curbal<charge1){
            cout<<"Your balance cannot play the property for unmortgage."<<endl;
            return;
        } else {
            game->LandingPlayer[who]->changeBalance(-charge1);
            game->LandingPlayer[who]->changeassets(-chargea);
            game->getBuilding(pp)->changemortgate(false);
            game->getBuilding(pp)->setLevel(0);
            cout<<"You unmortgage this property!"<<endl;
            return;
        }
    } else if (Isr(pp)){
        if (game->getBuilding(pp)->getimprovement()!=-1) {
            cout<<"This property is not mortgaged"<<endl;
            return;
        } else if (curbal<120){
            cout<<"Your balance cannot play the property unmortgage."<<endl;
            return;
        } else {
            game->LandingPlayer[who]->changeBalance(-120);
            game->LandingPlayer[who]->changeassets(-20);
            game->getBuilding(pp)->changemortgate(false);
            game->getBuilding(pp)->setimprovement();
            cout<<"You unmortgage this property!"<<endl;
            return;
        }
    } else if (Isg(pp)){
        if (game->getBuilding(pp)->getimprovement()!=-1) {
            cout<<"This property is not mortgaged"<<endl;
            return;
        } else if (curbal<120){
            cout<<"Your balance cannot play the property unmortgage."<<endl;
            return;
        } else {
            game->LandingPlayer[who]->changeBalance(-90);
            game->LandingPlayer[who]->changeassets(-15);
            game->getBuilding(pp)->changemortgate(false);
            game->getBuilding(pp)->setimprovement();
            cout<<"You unmortgage this property!"<<endl;
            return;
        }
    } else {
        cout<<"Invalid property to unmortgate"<<endl;
        return;
    }
}


void Controller::cmd_assets(int who){
    int pos=game->LandingPlayer[who]->GetPosition();
    cout<<"There are "<<game->LandingPlayer.size()<<" in the game."<<endl;
    cout<<"You are "<< game->LandingPlayer[who]->GetWhoPlay()<<" your IGN is "<<game->LandingPlayer[who]->GetReprePiece()<<"."<<endl;
    if (pos==4) {
        cout<<"Sorry, we cannot display your assets since you're in the Tuition."<<endl;
        return;
    } else{
        double r=game->LandingPlayer[who]->GetBalance();
        cout<<"Your current balance is "<<r<<"."<<endl;
        double r1=game->LandingPlayer[who]->getassets();
        cout<<"Your total worth(assets) is "<<r1<<"."<<endl;
        //
        
        //cout<<"debug property numbers "<<game->LandingPlayer[who]->GetOwnedProperty().size()<<endl;
        
        //
        if (game->LandingPlayer[who]->GetOwnedProperty().size()==0) {
            return;
        }
        cout<<"Your owned property: ";
        for (unsigned int i=0; i<game->LandingPlayer[who]->GetOwnedProperty().size(); i++) {
            cout<<game->LandingPlayer[who]->GetOwnedProperty()[i]+" ";
        }
        cout<<endl;
        for (unsigned int i=0; i<game->LandingPlayer[who]->GetOwnedProperty().size(); i++) {
            if (Isab(game->LandingPlayer[who]->GetOwnedProperty()[i])) {
                Building *he=game->getBuilding(game->LandingPlayer[who]->GetOwnedProperty()[i]);
                if (he->Getismonoply()) {
                    cout<<"Your academic property "<<game->LandingPlayer[who]->GetOwnedProperty()[i]<<" with improvement: "<<he->GetLevel()<<"."<<endl;
                }
            }
        }
        return;
    }
}


/*double Controller::sell_all(Player *p){
 double oldbal=p->GetBalance();
 double r=0;
 for (int i=0; i<p->GetOwnedProperty().size(); i++) {
 Building *temp=game->getBuilding(p->GetOwnedProperty()[i]);
 if (Isab(temp->getname())) {
 if (temp->GetLevel()==-1) {
 continue;
 } else if (temp->GetLevel()==0){
 temp->changelevel(-1);
 double m1=temp->GetPurchaseCost();
 m1=m1/2;
 p->changeBalance(m1);
 //cout<<"Hi "<<p->GetWhoPlay()<<" now you mortaged academic building "<<temp->getname()<<"."<<endl;
 } else {
 while (temp->GetLevel()!=0) {
 int oldlv=temp->GetLevel();
 double gain1=temp->GetImproveCost();
 p->changeBalance(gain1);
 p->changeassets(gain1);
 temp->setLevel(oldlv-1);
 }
 }
 } else if (Isr(temp->getname())){
 if (!temp->getmortgate()) {
 double m2=temp->GetPurchaseCost();
 m2/=2;
 p->changeBalance(m2);
 }
 } else if (Isg(temp->getname())){
 if (!temp->getmortgate()) {
 double m3=temp->GetPurchaseCost();
 m3/=2;
 p->changeBalance(m3);
 }
 }
 }
 cout<<"Now you balance raise from "<<oldbal<<" to "<<r<<"."<<endl;
 return r;
 }*/




void Controller::cmd_bankrupt(int who){
    //int next=who;
    /*if (game->LandingPlayer[who]->GetBalance()>=pay) {
     cout<<"Your balance pay the property charge. You cannot declare bankrupt."<<endl;
     return;
     }*/
    cout<<"You have two options:"<<endl;
    cout<<"1.Give all your assets to who is owed."<<endl;
    cout<<"2.Return your property in the market."<<endl;
    cout<<"Please choose 1 or 2."<<endl;
    string cd;
    cin>>cd;
    if (cd=="2") {
        Player *pl=game->LandingPlayer[who];
        for (unsigned int i=0; i<pl->GetOwnedProperty().size(); i++) {
            Building *s=game->getBuilding(pl->GetOwnedProperty()[i]);
            //call the aution function!
            aution(pl, s);
        }
        cout<<"Player "<<pl->GetWhoPlay()<<" left this this game."<<endl;
        totalplayers--;
        Cups=Cups-pl->GetCups();
        game->removePlayer(pl);
        return;
    } else if (cd=="1"){
        int pos=game->LandingPlayer[who]->GetPosition();
        Building *b1=game->getBuilding(getNb(pos));
        if (b1->getOwner()=='K') {
            cout<<"You give all assets to bank."<<endl;
            totalplayers--;
            Player *pl1=game->LandingPlayer[who];
            //add method to change buildings owner char/string and monopoly and improvement
            for (unsigned int i=0; i<pl1->GetOwnedProperty().size(); i++) {
                Building *temp=game->getBuilding(pl1->GetOwnedProperty()[i]);
                temp->changeOwner('K');
                temp->setmonopoly(false);
                temp->setows("BANK");
                temp->changemortgate(false);
                if (Isab(temp->getname())) {
                    temp->setmonopoly(false);
                    temp->setLevel(0);
                } else if (Isr(temp->getname())){
                    temp->setimprovement();
                } else if (Isg(temp->getname())){
                    temp->setimprovement();
                }
            }
            cout<<"Player "<<pl1->GetWhoPlay()<<" left this this game."<<endl;
            Cups=Cups-pl1->GetCups();
            game->removePlayer(pl1);
            cout<<endl;
            cout<<"It's your turn, "<<game->LandingPlayer[who]->GetWhoPlay()<<"."<<endl;
            cout<<"Please enter a command:roll/trade/improve/mortgage/unmortgage/assets/save/exit/bankrupt"<<endl;
        } else {
            Player *ap=game->getPlayer(b1->getOwner());
            cout<<"You give all assets to the player: "<<ap->GetWhoPlay()<<endl;
            Player *rp=game->LandingPlayer[who];
            //add method to change buildings owner char/string and monopoly and improvement
            //
            //
            long pplength=rp->GetOwnedProperty().size();
            for (unsigned int i=0; i<pplength; i++) {
                //cout<<"debug if in the loop."<<endl;
                cout<<"i :" <<i<<endl;
                Building *gtemp=game->getBuilding(rp->GetOwnedProperty()[i]);
                gtemp->changeOwner(ap->GetReprePiece());
                gtemp->setows(ap->GetWhoPlay());
                gtemp->setmonopoly(false);
                if (gtemp->getimprovement()==-1) {
                    //cout<<"debug if in the mortgaged."<<endl;
                    cout<<ap->GetWhoPlay()<<" you have to pay 10% of worth for property "<<gtemp->getname()<<"."<<endl;
                    ap->changeBalance(-.1*gtemp->GetPurchaseCost());
                    ap->changeassets(-.1*gtemp->GetPurchaseCost());
                    cout<<ap->GetWhoPlay()<<" you have two options: "<<endl;
                    cout<<"1.You can unmortgage this property with 50% the original cost."<<endl;
                    cout<<"2.You can leave the property with mortgage."<<endl;
                    cout<<"Please choose 1 or 2."<<endl;
                    string readn;
                    cin>>readn;
                    if (readn=="1") {
                        //
                        //cout<<"debug cost for um: "<<gtemp->GetPurchaseCost()*.5<<endl;
                        //
                        ap->changeBalance(-gtemp->GetPurchaseCost()*.5);
                        cout<<ap->GetWhoPlay()<<" you unmortgaged a property: "<<gtemp->getname()<<endl;
                    } else if (readn=="2"){
                        cout<<"Ok, you can try unmortgage it next time."<<endl;
                    } else {
                        cout<<"Invalid input"<<endl;
                    }
                }
                gtemp->changemortgate(false);
                ap->changeProperty(1, gtemp->getname());
                if (Isab(gtemp->getname())) {
                    int whor=game->getpositioninlp(ap->GetWhoPlay());
                    IsMonopoly(whor);
                    //ap->changeassets(gtemp->GetPurchaseCost());
                    if (gtemp->GetLevel()==-1) {
                        gtemp->setLevel(0);
                    }
                    if (gtemp->GetLevel()>0) {
                        //  ap->changeassets(gtemp->GetTuitionWImprove());
                    }
                } else if (Isr(gtemp->getname())){
                    gtemp->setimprovement();
                    //ap->changeassets(gtemp->GetPurchaseCost());
                } else if (Isg(gtemp->getname())){
                    gtemp->setimprovement();
                    //ap->changeassets(gtemp->GetPurchaseCost());
                }
            }
            double cassets=rp->getassets();
            double cbal=rp->GetBalance();
            ap->changeassets(cassets);
            ap->changeBalance(cbal);
            cout<<"Player "<<rp->GetWhoPlay()<<" left this game."<<endl;
            Cups=Cups-rp->GetCups();
            game->removePlayer(rp);
            totalplayers--;
            cout<<"It's your turn, "<<game->LandingPlayer[who]->GetWhoPlay()<<"."<<endl;
            cout<<"Please enter a command:roll/trade/improve/mortgage/unmortgage/assets/save/exit/bankrupt"<<endl;
        }
        return;
    } else{
        cout<<"Invalid input, please call bankrupt again."<<endl;
        return;
    }
}

void Controller::cmd_save(){
    string filename;
    cin>>filename;
    ofstream savefile;
    savefile.open((filename.c_str()));
    savefile<<totalplayers<<endl;
    long lenp=game->LandingPlayer.size();
    for (int i=0; i<lenp; i++) {
        if (game->LandingPlayer[i]->GetPosition()==10) {
            if (game->LandingPlayer[i]->getleave()==0) {
                savefile<<game->LandingPlayer[i]->GetWhoPlay()<<" "<<game->LandingPlayer[i]->GetReprePiece()<<" "<<game->LandingPlayer[i]->GetCups()<<" "<<game->LandingPlayer[i]->GetBalance()<<" 10 0"<<endl;
            } else if(game->LandingPlayer[i]->getleave()==1){
                savefile<<game->LandingPlayer[i]->GetWhoPlay()<<" "<<game->LandingPlayer[i]->GetReprePiece()<<" "<<game->LandingPlayer[i]->GetCups()<<" "<<game->LandingPlayer[i]->GetBalance()<<" 10 1 "<<game->LandingPlayer[i]->getNumTims()<<endl;
            }
        } else {
            savefile<<game->LandingPlayer[i]->GetWhoPlay()<<" "<<game->LandingPlayer[i]->GetReprePiece()<<" "<<game->LandingPlayer[i]->GetCups()<<" "<<game->LandingPlayer[i]->GetBalance()<<" "<<game->LandingPlayer[i]->GetPosition()<<endl;
        }
    }
    for (int i=0; i<40; i++) {
        //bool IsAcademic = IsProperty(i, 22, academicPositon);
        if (game->map[i]->gethasOwener()==false) {
            if (Isab(game->map[i]->getname())){
                savefile<<game->map[i]->getname()<<" BANK 0"<<endl;
                //savefile<<game->map[i]->getname()<<" BANK "<<game->map[i]->getimprovement()<<endl;
            } /*else {
               savefile<<game->map[i]->getname()<<" BANK 0"<<endl;
               }*/
        } else {
            string pc=game->map[i]->getows();
            //
            //cout<<"debug level save."<<ga<<endl;
            //
            if (Isab(game->map[i]->getname())) {
                savefile<<game->map[i]->getname()<<" "<<pc<<" "<<game->map[i]->GetLevel()<<endl;
            }else {
                savefile<<game->map[i]->getname()<<" "<<pc<<" "<<game->map[i]->getimprovement()<<endl;
            }
        }
    }
    savefile.close();
}

void Controller::cmd_exit(){
    cout<<"Do you wan to exit this game? (Y/N)"<<endl;
    string cc;
    cin>>cc;
    if (cc=="Y") {
        cout<<"Do you want to save game. (Y/N)"<<endl;
        string temp;
        cin>>temp;
        if (temp=="N") {
            cout<<"Ok. Leaving the game."<<endl;
            isend=true;
            return;
        } else {
            cout<<"Please enter the save filename:"<<endl;
            cmd_save();
            isend=true;
            return;
        }
    } else {
        cout<<"Please Enter Command:roll/trade/improve/mortgage/unmortgage/assets/save/exit"<<endl;
        return;
    }
}




void Controller::aution(Player *p, Building *sell){
    //array of string for players then paimai
    //while (xxxx.size()!=0)
    // do you want to
    double worth=sell->GetPurchaseCost();
    vector<string> ps;
    long l=game->LandingPlayer.size();
    for (unsigned int i=0; i<l; i++) {
        if (game->LandingPlayer[i]->GetWhoPlay()!=p->GetWhoPlay()) {
            ps.push_back(game->LandingPlayer[i]->GetWhoPlay());
        }
    }
    while (ps.size()!=1) {
        for (unsigned int i=0; i<ps.size(); i++) {
            Player *p=game->getnPlayer(ps[i]);
            cout<<sell->getname()<<" is now for "<<worth<<"."<<endl;
            cout<<ps[i]<<" "<<"Do you want to quit this auction or raise the bid? (y/n)"<<endl;
            string ans;
            cin>>ans;
            if (ans=="y") {
                cout<<"How much money do you want to raise? (please enter a number)"<<endl;
                int qqq;
                cin>>qqq;
                worth=worth+qqq;
                
                //
                
                //cout<<"debug now all buyer is ";
                for (unsigned int i=0; i<ps.size();i++) {
                    cout<<ps[i]<<" ";
                }
                cout<<endl;
                //
            } else if (ans=="n"){
                cout<<p->GetWhoPlay()<<" quit this aution."<<endl<<endl;
                for (unsigned int i=0; i<ps.size(); i++) {
                    if (p->GetWhoPlay()==ps[i]) {
                        ps.erase(ps.begin()+i);
                        //cout<<"ps size is "<<ps.size()<<endl;
                        //continue;
                    }
                }
            }
        }
    }
    Player *winner=game->getnPlayer(ps[0]);
    cout<<"The winner is "<<winner->GetWhoPlay()<<endl;
    sell->changeOwner(winner->GetReprePiece());
    sell->setows(winner->GetWhoPlay());
    sell->changehasOwener();
    //cout<<"debug for owner "<<sell->gethasOwener()<<endl;
    winner->changeProperty(1, sell->getname());
    int ppppp=game->getpositioninlp(ps[0]);
    IsMonopoly(ppppp);
    winner->changeBalance(-worth);
    winner->changeassets(-worth+sell->GetPurchaseCost());
    if (Isr(sell->getname())) {
        winner->changeOwnResidence(1);
    }
    if (Isg(sell->getname())) {
        winner->changeOwnGym(1);
    }
    return;
}

















