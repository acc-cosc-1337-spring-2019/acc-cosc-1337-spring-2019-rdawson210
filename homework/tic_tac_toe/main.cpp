#include "tic_tac_toe.h"
#include<string>
#include<iostream>
#include<vector>

using std::cout;
using std::cin;

int main()
{
	char choice = 1;
	int mark;
	string player;
	do
	{
		cout << "First player: To use X, type X. To use O, type O." << "\n";
		cin >> player;
		TicTacToe game;
		game.start_game(player);
		do
		{
			cout << "Player " << game.get_player() << ", type the number of the spot you would like to mark" << "\n";
			cin >> mark;
			game.mark_board(mark);
			game.display_board();
		} while (game.game_over() == false);
		cout << "Your game has ended. To play another game, press 1. To exit, press 2." << "\n";
		cin >> choice;
	} while (choice == '1');
	cout << "Goodbye";

}