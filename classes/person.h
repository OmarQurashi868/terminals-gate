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
 // setters
    void setName(string name)
    {
        this->name = name;
    }

    void setLocation( Town* location ) 
    {
        this->location = location;
    }
    
// getters 
    string getName()
    {
        return this->name;
    }
};