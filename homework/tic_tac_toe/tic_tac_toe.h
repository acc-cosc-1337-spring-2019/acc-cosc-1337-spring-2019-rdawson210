#ifndef TICTACTOE_H
#define TICTACTOE_H
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"
#include<string>
#include<vector>
#include<iostream>

using std::istream;
using std::ostream;
using std::string;
using std::vector;

class TicTacToe 
{
public:
	TicTacToe(int s) : pegs(s*s, " ") {}
	bool game_over();
	void start_game(string first_player);
	void mark_board(int mark);
	string get_player() const;
	string get_winner() const { return winner; }
	friend istream & operator >> (istream & in, TicTacToe& game);
	friend ostream & operator << (ostream & out, const TicTacToe game);

protected:
	vector<string>pegs{};

	virtual bool check_column_win();
	virtual bool check_row_win();
	virtual bool check_diagonal_win();
	
private:
	string next_player;
	string winner;

	void set_next_player();
	void clear_board();
	bool check_board_full();
	void set_winner();
};
#endif //TICTACTOE_H