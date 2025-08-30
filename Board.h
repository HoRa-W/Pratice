#pragma once
#include "PlayerGame_TTT.h"
using std::cout;
using std::cin;

class Board {
	char grid[3][3];
	int FilledCells; //Used to calculate the cells drawn
public:
	Board();
	void drawBoard() const;
	bool isValidMove(int row, int col) const;
	void makeMove(int row, int col, char symbol);
	bool checkWin(char symbol) const;
	bool isFull() const;
	int getFilledCells() const;
};