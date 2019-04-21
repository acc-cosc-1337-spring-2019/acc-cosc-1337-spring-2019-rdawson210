#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include "tic_tac_toe.h"
#include"tic_tac_toe_data.h"
#include<vector>
#include<memory>
//Write class interface here

class TicTacToeManager
{
public:
	TicTacToeManager();
	void save_game(std::unique_ptr<TicTacToe>& game);
	std::unique_ptr<TicTacToe> get_game(GameType game_type);
	friend std::ostream & operator << (std::ostream & out,
		const TicTacToeManager & t);
	const std::vector<std::unique_ptr<TicTacToe>>& get_games() { return games; };
	void get_winner_totals(int& x, int& o, int& c);
private:
	std::vector<std::unique_ptr<TicTacToe>> games;
	void update_winner_count(std::string winner);
	void set_scores();

	int x_win{ 0 }, o_win{ 0 }, ties{ 0 };
	TicTacToeData data;
};

#endif // !TIC_TAC_TOE_MANAGER_H