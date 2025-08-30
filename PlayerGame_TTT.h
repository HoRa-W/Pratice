#pragma once
#include <iostream>
#include <string>
using std::string;

class Player {
private:
	char symbol;
	string name;
public:
	Player(char symbol = 'X', string name = "Player X")
	{
		this->symbol = symbol;
		this->name = name;
	}
	char getSymbol() const { return symbol; }
	string getName() const { return name; }
};