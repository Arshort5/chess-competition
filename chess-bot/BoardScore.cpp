#include "BoardScore.h"

static int Evaluate(chess::Board& board) {

	int score = 0;
	for (size_t row = 0; row < 8; row++) {
		for (size_t col = 0; col < 8; col++)
		{
			auto piece = board.at(chess::Square(chess::File(row), chess::Rank(col)));
			switch (piece.type()) {





			}
		}
	}

}