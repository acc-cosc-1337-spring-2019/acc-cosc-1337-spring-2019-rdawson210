#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*
TEST_CASE("Test first player X") 
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");

	REQUIRE(tic_tac_toe.get_player() == "X");

}
*/

TEST_CASE("Test win by first column")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);
	REQUIRE(board.game_over() == false);
	board.mark_board(2);
	REQUIRE(board.game_over() == false);
	board.mark_board(4);
	REQUIRE(board.game_over() == false);
	board.mark_board(5);
	REQUIRE(board.game_over() == false);
	board.mark_board(7);
	REQUIRE(board.game_over() == true);
}