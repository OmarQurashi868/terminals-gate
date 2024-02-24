#include <iostream>
using namespace std;

class Town;

class Person
{
private:
    string name;
    Town* location;

public:
    Person() : name(""), location(nullptr) {} // default constructor
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