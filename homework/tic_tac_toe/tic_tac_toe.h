#ifndef TICTACTOE_H
#define TICTACTOE_H
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
	bool game_over();
	void start_game(string first_player);
	void mark_board(int mark);
	string get_player() const;
	string get_winner() const { return winner; }
	friend istream & operator >> (istream & in, TicTacToe& game);
	friend ostream & operator << (ostream & out, const TicTacToe game);
	
private:
	string next_player;
	vector<string>pegs{ 9, " " };
	string winner;

	void set_next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_board();
	bool check_board_full();
	void set_winner();
};
#endif //TICTACTOE_H