#pragma once
#include "Board.h"
#include "Player.h"

#include <memory>

class GameState {
public:

private:
    std::shared_ptr<Board> board;
    std::shared_ptr<Player> currentPlayer;
};
