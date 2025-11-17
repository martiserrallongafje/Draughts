#include <iostream>
#include <vector>

std::vector<char> board{
	'.','x','.','x','.','x','.','x',
	'x','.','x','.','x','.','x','.',
	'.','x','.','x','.','x','.','x',
	'.','.','.','.','.','.','.','.',
	'.','.','.','.','.','.','.','.',
	'o','.','o','.','o','.','o','.',
	'.','o','.','o','.','o','.','o',
	'o','.','o','.','o','.','o','.',
};

char player1 = 'x';
char player2 = 'o';

struct Coords {
	int x;
	int y;
};

Coords indexToCoords(int index) {
	return { index % 8, index / 8 };
}

int coordsToIndex(Coords coords) {
	return coords.x + coords.y * 8;
}

void printBoard() {
	for (int i = 0; i < board.size(); ++i) {
		if (i % 8 == 0)
			std::cout << '\n';

		std::cout << ' ' << board.at(i);
	}
	std::cout << "\n";
}

void movePawn(int from, int to) {
	board.at(to) = board.at(from);
	board.at(from) = '.';
}

int main() {
	printBoard();
	movePawn(coordsToIndex({ 0,5 }), coordsToIndex({ 1,4 }));

	printBoard();
	movePawn(coordsToIndex({ 3,2 }), coordsToIndex({ 2,3 }));
	
	printBoard();
	movePawn(coordsToIndex({ 1,4 }), coordsToIndex({ 2,3 }));
	movePawn(coordsToIndex({ 2,3 }), coordsToIndex({ 3,2 }));

	printBoard();
}
