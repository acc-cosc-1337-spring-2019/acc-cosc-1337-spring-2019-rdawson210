#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include "tic_tac_toe.h"
#include<vector>
#include<string>
#include<iostream>


using std::vector;
using std::string;
using std::ostream;

class TicTacToeManager
{
public:
	void save_game(const TicTacToe game);
	friend ostream & operator << (ostream & out, const TicTacToeManager history);

private:
	vector<TicTacToe> games;
	
	int x_win = 0;
	int o_win = 0;
	int ties = 0;
	void update_winner_count(string winner);
};

#endif // !TIC_TAC_TOE_MANAGER_H
