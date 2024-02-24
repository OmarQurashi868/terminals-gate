#include <iostream>
#include "person.h"
using namespace std;

class Character : Person
{
private:
    string vocation;
    int level;

public:
    Character(string name, string vocation, int level)
        : Person(name)
    {
        this->vocation = vocation;
        this->level = level;
    }
    void test()
    {
        cout << this->getName();
    }
};
