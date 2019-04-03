#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"
#include<string>
#include<iostream>
#include<vector>

using std::cout;
using std::cin;

int main()
{
	/*char choice = 1;
	string player;
	TicTacToeManager history;
	cout << "To play with a 3x3 board, press 3. To play with a 4x4 board, press 4." << "\n";
	int size;
	cin >> size;
	do
	{
		cout << "First player: To use X, type X. To use O, type O." << "\n";
		cin >> player;
		TicTacToe* game;
		if (size == 3)
		{
			game = new TicTacToe3();
		}
		else if (size == 4)
		{
			game = new TicTacToe4();
		}
		game->start_game(player);
		do
		{
			cin >> *game;
			cout << *game;
		} while (game->game_over() == false);
		history.save_game(*game);
		delete game;
		cout << "Your game has ended. To play another game, press 1. To exit, press 2." << "\n";
		cin >> choice;
	} while (choice == '1');
	cout << history;*/
}