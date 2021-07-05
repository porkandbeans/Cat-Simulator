#ifndef CAT_H
#define CAT_H
#pragma once
#include <string>

using namespace std;

class Cat
{
private:
	int _happy;
	string _name;

public:
	Cat(string name);
	void getPet();
	void status();
};
#endif