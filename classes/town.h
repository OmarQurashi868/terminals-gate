#include <iostream>
#include "person.h"
using namespace std;

const int MAX_RESIDENTS = 100;

class Town 
{
private:
    string name;
    Person residents[ MAX_RESIDENTS ];
    int current_residentsNumber;
    int requiredLevel;
public:
    Town(string name, int requiredLevel ) 
    {
        this->name = name;
        this->requiredLevel = requiredLevel;
        this->current_residentsNumber = 0;
    }

    void changeResidentsNumber( int change ) 
    {
        this->current_residentsNumber += change;
    }


    // Setters
    void setName(const std::string& name) {
        this->name = name;
    }

    void setCurrentResidentsNumber(int current_residentsNumber) {
        this->current_residentsNumber = current_residentsNumber;
    }

    void setRequiredLevel(int requiredLevel) {
        this->requiredLevel = requiredLevel;
    }


    // Getters
    string getName() const {
        return name;
    }

    int getCurrentResidentsNumber() const {
        return current_residentsNumber;
    }

    int getRequiredLevel() const {
        return requiredLevel;
    }


};