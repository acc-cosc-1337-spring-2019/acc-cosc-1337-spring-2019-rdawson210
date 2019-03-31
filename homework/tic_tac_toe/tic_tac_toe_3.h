#ifndef TIC_TAC_TOE3_H
#define TIC_TAC_TOE3_H

#include "tic_tac_toe.h"

class TicTacToe3 : public TicTacToe
{
public:
	TicTacToe3(); 

private:
	vector<string>pegs{};
	
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
};

#endif //TIC_TAC_TOE3_H