#include <iostream>
#include "person.h"
using namespace std;

struct Stats 
{
    int health;
    int strength;
    int speed;
};

class Character : Person
{
private:
    string vocation;
    int level;
    Stats attributes;

public:
    Character(string name, string vocation)
        : Person(name)
    {
        this->vocation = vocation;
        this->level = 0;
    }

    void setVocation( string given_vocation ) 
    {
        this->vocation = given_vocation;
    }

    void levelUp( int given_level ) 
    {
        this->level = given_level;
    }


};
