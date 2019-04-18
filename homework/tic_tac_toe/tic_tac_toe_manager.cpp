#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"


//Write class function implementations here

TicTacToeManager::TicTacToeManager()
{
	games = get_games();
}

void TicTacToeManager::save_game(std::unique_ptr<TicTacToe>& game)
{
	update_winner_count(game->get_winner());
	games.push_back(std::move(game));
	save_game(get_pegs()); //why undefined?
}

std::unique_ptr<TicTacToe> TicTacToeManager::get_game(GameType game_type)
{
	if (game_type == GameType::three)
	{
		return std::make_unique<TicTacToe3>();
	}
	else
	{
		return std::make_unique<TicTacToe4>();
	}
}

void TicTacToeManager::get_winner_totals(int & x, int & o, int & c)
{
	x = x_win;
	o = o_win;
	c = ties;
}

void TicTacToeManager::update_winner_count(std::string winner)
{
	if (winner == "C")
	{
		ties++;
	}
	else if (winner == "X")
	{
		x_win++;
	}
	else if (winner == "O")
	{
		o_win++;
	}
}

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & t)
{
	for (auto& game : t.games)
	{
		out << *game;
	}

	out << "X wins: " << t.x_win << "\n";
	out << "O wins: " << t.o_win << "\n";
	out << "Ties: " << t.ties << "\n";

	return out;
}