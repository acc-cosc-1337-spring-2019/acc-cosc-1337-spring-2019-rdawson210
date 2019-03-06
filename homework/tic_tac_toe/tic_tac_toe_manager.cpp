#include "tic_tac_toe_manager.h"
#include<string>
#include<vector>

using std::string;
using std::vector;

void TicTacToeManager::display_history() const
{
	
}

void TicTacToeManager::update_winner_count(string winner)
{
	if (winner == "X")
	{
		++x_win;
	}
	else if (winner == "O")
	{
		++o_win;
	}
	else if (winner == "C")
	{
		++ties;
	}
}

