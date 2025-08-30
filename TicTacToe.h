#pragma once
#include "PlayerGame_TTT.h"
#include "Board.h"
#include <string>

class TicTacToe : public Board, Player {
private:
	Board board;
	Player Players[2];
	int currentPlayerIndex;
public:
	TicTacToe();
	Player& getCurrentPlayer();
	void swithTurn();
	void Play();
};