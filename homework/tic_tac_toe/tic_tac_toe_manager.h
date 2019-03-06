#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include "tic_tac_toe.h"
#include<vector>
#include<string>
#include<iostream>

using std::vector;
using std::string;

class TicTacToeManager
{
public:
	//void save_game(const TicTacToe game) { games.push_back(game); };//
	void display_history() const;
private:
	//vector<TicTacToe> games; //WHYYYYYYY
	vector<string> b;
	int x_win = 0;
	int o_win = 0;
	int ties = 0;
	void update_winner_count(string winner);
};

#endif // !TIC_TAC_TOE_MANAGER_H
