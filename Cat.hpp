#ifndef CAT_H
#define CAT_H
#pragma once
#include <string>

using namespace std;

class Cat
{
private:
	int _happy;
	int _fur;
	int _full;
	string _name;

public:
	Cat(string name);
	void getPet();
	void status();
	void shave(int buzz);
	int getHappy();
	string getName();
	void feedCat(int food);
	void puke();
	int statusFull();
};
#endif