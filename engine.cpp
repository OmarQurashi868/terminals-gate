#include <iostream>
#include "classes/character.h"
#include "classes/town.h"
#include <conio.h>
using namespace std;

void mainMenu();
void startNewGame();
void intro();
int gameLoop();

string t1tt[3] = {"", "", ""};

Town towns[6] = {Town("Whispering Pines", 6, t1tt),
                 Town("Everbrook", 4, t1tt),
                 Town("Moonhaven", 4, t1tt),
                 Town("Foggy Bottom", 7, t1tt),
                 Town("Stardust Valley", 3, t1tt),
                 Town("Crystal Lake", 2, t1tt)};

int main()
{
    mainMenu();
    return 0;
};

void mainMenu()
{
    int choice;
    // to do: if save file exists : load
    cout << "1.New Game \n2.Exit" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        startNewGame();
        break;
    }
    case 2:
    {
        system("pause");
        break;
    }
    default:
    {
        cout << "Invalid choice" << endl;
        mainMenu();
        break;
    }
    }
}

void startNewGame()
{
    intro();
    while (gameLoop() == 0)
    {
    }
}

void intro()
{
    // TODO: intro
    cout << "---------------------------------------------" << endl;
    cout << "Once upon a time kan fi zunji...ismu Akram..." << endl;
}

int gameLoop()
{
    cout << "---------------------------------------------" << endl;
    cout << "1.Talk to NPCs" << endl;
    cout << "2.Go to other town" << endl;
    cout << "3.Shop" << endl;
    cout << "4.Exit game" << endl;
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        // TODO: List NPCs in town
        cout << "you speak" << endl;
        break;
    }
    case 2:
    {
        // TODO: List traversable towns
        cout << "you travel" << endl;
        break;
    }
    case 3:
    {
        // TODO: Open shop
        cout << "you shop" << endl;
        break;
    }
    case 4:
    {
        return 1;
        break;
    }
    default:
    {
        cout << "Invalid choice" << endl;
        gameLoop();
        break;
    }
    }
    return 0;
}