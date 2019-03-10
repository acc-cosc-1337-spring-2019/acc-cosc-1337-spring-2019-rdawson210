#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include<string>
#include<iostream>
#include<vector>

using std::cout;
using std::cin;

int main()
{
	char choice = 1;
	string player;
	TicTacToeManager history;
	do
	{
		cout << "First player: To use X, type X. To use O, type O." << "\n";
		cin >> player;
		TicTacToe game;
		game.start_game(player);
		do
		{
			cin >> game;
			cout << game;
		} while (game.game_over() == false);
		history.save_game(game);
		cout << "Your game has ended. To play another game, press 1. To exit, press 2." << "\n";
		cin >> choice;
	} while (choice == '1');
	cout << history;

}