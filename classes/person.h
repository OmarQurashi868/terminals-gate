#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    // Town location;

public:
    Person(string name)
    {
        this->name = name;
    }
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return this->name;
    }
};