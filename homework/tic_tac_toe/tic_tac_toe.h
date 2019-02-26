#include<string>
#include<vector>

using std::string;
using std::vector;

class TicTacToe 
{
public:
	bool game_over();
	void start_game(string first_player);
	void mark_board(int mark);
	void display_board() const;
	string get_player() const;
private:
	string next_player;
	vector<string>pegs{ 9, 0 };

	void set_next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_board();
	bool check_board_full();
};