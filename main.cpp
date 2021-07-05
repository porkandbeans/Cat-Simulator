#include <iostream>
#include <string>

#include "Cat.hpp"

using namespace std;

int main()
{
    cout << "~~ Terminal-based Cat Simulator 2021 ~~\n\n";
    cout << "Name your cat: ";
    string catName;
    cin >> catName;
    Cat garfield(catName);
    bool gameOver = false;
    string input;

    cout << "commands - h\n";
    while (!gameOver)
    {

        cout << "CatSim> ";
        cin >> input;
        if (input == "h")
        {
            cout << "pet - pet the kitty!\n";
            cout << "check - get cat status\n";
            cout << "shave - shave the cat\n";
            cout << "oven - uhhhhhhh\n";
            cout << "exit - end this dumb program\n";
        }
        else if (input == "pet")
        {
            garfield.getPet();
        }
        else if (input == "exit")
        {
            gameOver = true;
        }
        else if (input == "check")
        {
            garfield.status();
        }
    }

    return 0;
}