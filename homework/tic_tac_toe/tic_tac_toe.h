#ifndef TIC_TAC_TOE
#define TIC_TAC_TOE

#include<iostream>
#include<string>
#include<vector>

using std::string;
using std::vector;
using std::ostream;
using std::istream;

enum GameType
{
	three = 3,
	four = 4
};

class TicTacToe
{
public:
	TicTacToe(GameType game_type) : pegs(game_type * game_type, " ") {}
	TicTacToe(vector<string> s) : pegs(s) {}
	void start_game(string first_player);
	string get_player() const;
	bool game_over();
	void mark_board(int position);
	string get_winner()const;
	friend ostream & operator << (ostream & out,
		const TicTacToe & t);
	friend istream & operator >> (istream & out,
		TicTacToe & t);

	const vector<string>& get_pegs() { return pegs; };

protected:
	vector<string> pegs;
	virtual bool check_column_win()=0;
	virtual bool check_row_win()=0;
	virtual bool check_diagonal_win()=0;

	string determine_winner();

private:
	string next_player;
	string winner;

	void set_next_player();
	void clear_board();
	bool check_board_full();
	void set_winner();
	
};

#endif // !TIC_TAC_TOE