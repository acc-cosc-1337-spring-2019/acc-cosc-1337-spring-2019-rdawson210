#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <string>
#include<vector>
#include<iostream>

using std::string;
using std::vector;
using std::cout;

bool TicTacToe::game_over()
{
	if (check_column_win() == true)
	{
		set_winner();
		return true;
	}
	else if (check_row_win() == true)
	{
		set_winner();
		return true;
	}
	else if (check_diagonal_win() == true)
	{
		set_winner();
		return true;
	}
	else if (check_board_full() == true)
	{
		set_winner();
		return true;
	}
	else
	{
		return false;
	}
}

void TicTacToe::start_game(string first_player)
{
	next_player = first_player;
}

void TicTacToe::mark_board(int mark)
{
	pegs[mark - 1] = next_player;
	if (game_over() == false)
	{
		set_next_player();
	}
}

string TicTacToe::get_player() const
{
	return next_player;
}

void TicTacToe::set_next_player()
{
	if (next_player == "X" || next_player == "x")
	{
		next_player = "O";
	}
	else
	{
		next_player = "X";
	}
}

bool TicTacToe::check_column_win()
{
	if (pegs[0] != " " && pegs[0] == pegs[3] && pegs[3] == pegs[6])
	{
		return true;
	}
	else if (pegs[1] != " " && pegs[1] == pegs[4] && pegs[4] == pegs[7])
	{
		return true;
	}
	else if (pegs[2] != " " && pegs[2] == pegs[5] && pegs[5] == pegs[8])
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool TicTacToe::check_row_win()
{
	if (pegs[0] != " " && pegs[0] == pegs[1] && pegs[1] == pegs[2])
	{
		return true;
	}
	else if (pegs[3] != " " && pegs[3] == pegs[4] && pegs[4] == pegs[5])
	{
		return true;
	}
	else if (pegs[6] != " " && pegs[6] == pegs[7] && pegs[7] == pegs[8])
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool TicTacToe::check_diagonal_win()
{
	if (pegs[0] != " " && pegs[0] == pegs[4] && pegs[4] == pegs[8])
	{
		return true;
	}
	else if (pegs[2] != " " && pegs[2] == pegs[4] && pegs[4] == pegs[6])
	{
		return true;
	}
	else
	{
		return false;
	}
}

void TicTacToe::clear_board()
{
	for (auto v : pegs)
	{
		v = " ";
	}
}

bool TicTacToe::check_board_full()
{
	int check = 0;
	for (auto v : pegs)
	{
		if (v == " ")
		{
			check = 0;
			break;
		}
		else
		{
			check = 1;
		}
	}
	if (check == 0)
	{
		return false;
	}
	else if (check == 1)
	{
		return true;
	}
}

void TicTacToe::set_winner()
{
	if (check_board_full() == true)
		winner = "C";
	else
		winner = next_player;
}

istream & operator>>(istream & in, TicTacToe& game)
{
	cout << "Player " << game.get_player() << ", type the number of the spot you would like to mark" << "\n";
	int mark;
	in >> mark;
	game.mark_board(mark);
	return in;
}

ostream & operator<<(ostream & out, const TicTacToe game)
{
	for (std::size_t i = 0; i < game.pegs.size(); i += 3)
	{
		cout << game.pegs[i] << "|" << game.pegs[i + 1] << "|" << game.pegs[i + 2] << "\n";
	}
	return out;
}

