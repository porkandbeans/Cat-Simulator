#include <iostream>
#include <string>
#include <random>

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

    cout << "input h to view commands\n";
    while (!gameOver)
    {

        cout << "CatSim> ";
        cin >> input;
        if (input == "h")
        {
            cout << "pet - pet the kitty!\n";
            cout << "check - get cat status\n";
            cout << "shave - shave the cat\n";
            cout << "feed - give the kitty a treat\n";
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
        else if (input == "shave")
        {
            //pass random int between 1 and 20
            garfield.shave(rand() % 21);
        }
        else if (input == "feed")
        {
            cout << "How many treats are you giving the cat?\n> ";
            int feed;
            cin >> feed;
            garfield.feedCat(feed);
        }

        if (garfield.getHappy() <= 4)
        {
            cout << garfield.getName() << " is meowing at you!\n";
        }

        if (garfield.statusFull() >= 50)
        {
            garfield.puke();
        }

        //cout << "DEBUG: " << garfield.getHappy() << ' ' << garfield.statusFull() << endl;
    }

    return 0;
}