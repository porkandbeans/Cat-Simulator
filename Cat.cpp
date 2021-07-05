#include "Cat.hpp"
#include <iostream>
#include <string>

using namespace std;

Cat::Cat(string name)
{
    _name = name;
    _happy = 0;
    _fur = 100;
    _full = 0;
    cout << "A cat has appeared on the battlefield!\nHis name is " << _name << endl;
}

void Cat::getPet()
{
    _happy++;
    cout << _name << " has been pet!\n";
}

void Cat::status()
{
    //===HAPPY CHECKS===
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

    //===FUR CHECKS===
    if (_fur > 80)
    {
        cout << "They're a fluffy kitty!\n";
    }
    else if (_fur >= 50)
    {
        cout << "They're missing quite a lot of fur...\n";
    }
    else if (_fur < 50 && _fur > 0)
    {
        cout << "This cat is basically naked.\n";
    }
    else
    {
        cout << _name << " is now a sphynx.\n";
    }
}

void Cat::shave(int buzz)
{
    _happy--;
    _fur -= buzz;
    cout << _name << " has been shaved.\n";
}

int Cat::getHappy()
{
    return _happy;
}

string Cat::getName()
{
    return _name;
}

void Cat::puke()
{
    cout << "Oh no!\n";
    system("sleep 2");
    cout << _name << " looks kinda funny...\n";
    system("sleep 2");
    cout << _name << " just puked on your carpet!\n";
    _happy = 0;
    _full = 0;
    // TODO: make the cat eat the puke
}

void Cat::feedCat(int food)
{
    _happy++;
    _full += food;
}

int Cat::statusFull()
{
    return _full;
}