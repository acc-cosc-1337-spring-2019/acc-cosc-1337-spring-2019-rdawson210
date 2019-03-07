#include "tic_tac_toe_manager.h"
#include<string>
#include<vector>
#include<iostream>

using std::string;
using std::vector;
using std::cout;

void TicTacToeManager::save_game(const TicTacToe game)
{
	update_winner_count(game.get_winner());
	games.push_back(game);
}

void TicTacToeManager::display_history() const
{
	cout << "Your game history:" << "\n";
	for (auto c : games)
	{
		c.display_board();
		cout << "\n";
	}
	cout << "Player X Total Wins: " << x_win << "\n";
	cout << "Player O Total Wins: " << o_win << "\n";
	cout << "Total Ties: " << ties << "\n";
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

