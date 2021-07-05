#include "Cat.hpp"
#include <iostream>
#include <string>

using namespace std;

Cat::Cat(string name)
{
    _name = name;
    cout << "A cat has appeared on the battlefield!\nHis name is " << _name << endl;
}

void Cat::getPet()
{
    _happy++;
    cout << _name << " has been pet!\n";

    if (_happy >= 10)
    {
        cout << "Oh no!\n";
        system("sleep 2");
        cout << _name << " looks kinda funny...\n";
        system("sleep 2");
        cout << _name << " just puked on your carpet!\n";
        _happy = 0;
    }
}

void Cat::status()
{
    if (_happy > 7)
    {
        cout << _name << " looks very satisfied with the current events.\n";
    }
    else if (_happy > 4)
    {
        cout << _name << " is purring.\n";
    }
    else
    {
        cout << _name << " doesn't look very happy at all!\n";
    }
}