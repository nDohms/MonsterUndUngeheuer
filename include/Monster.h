#ifndef MONSTER_H
#define MONSTER_H

#include <string>
#include <fstream>
#include <iostream>

using namespace std;

class Monster
{
    public:
        Monster();
        Monster(string mN, int a, int b, int p);
        virtual ~Monster();

        void SetPage();
        void SetMonsterName();
        void SetBook();
        void SetArea();
        int SetID();
        int GetPage();
        int GetArea();
        int GetBook();
        string GetMonsterName();

        void NewMonster();

        void SaveMonster();

    protected:

    private:
        string monsterName;      //Name der Monster
        int page;                //Seite auf der das Monser steht
        int book;                //Buch in dem das Monster steht
        int area;                //Landschaftszonen in dem das Monster vor kommt
        static int ID;
};

#endif // MONSTER_H
