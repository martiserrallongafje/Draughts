#pragma once
#include "Board.h"
#include "Player.h"

class GameState {
public:
	GameState() = default;
	GameState(Board* board, Player* current, Player* next)
		: board(board)
		, currentPlayer(current)
		, nextPlayer(next)
	{
	}

private:
	Board* board = nullptr;
	Player* currentPlayer = nullptr;
	Player* nextPlayer = nullptr;
};
