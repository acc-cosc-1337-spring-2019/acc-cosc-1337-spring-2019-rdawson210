#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test game over")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	delete board;
}

TEST_CASE("Test first player X") 
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");

	REQUIRE(board->get_player() == "X");
	delete board;
}

TEST_CASE("Test first player O")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("O");

	REQUIRE(board->get_player() == "O");
	delete board;
}

TEST_CASE("Test win by first column")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);
	REQUIRE(board->game_over() == false);
	board->mark_board(2);
	REQUIRE(board->game_over() == false);
	board->mark_board(4);
	REQUIRE(board->game_over() == false);
	board->mark_board(5);
	REQUIRE(board->game_over() == false);
	board->mark_board(7);
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test win by second column")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(2);
	REQUIRE(board->game_over() == false);
	board->mark_board(1);
	REQUIRE(board->game_over() == false);
	board->mark_board(5);
	REQUIRE(board->game_over() == false);
	board->mark_board(6);
	REQUIRE(board->game_over() == false);
	board->mark_board(8);
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test win by third column")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(3);
	REQUIRE(board->game_over() == false);
	board->mark_board(1);
	REQUIRE(board->game_over() == false);
	board->mark_board(6);
	REQUIRE(board->game_over() == false);
	board->mark_board(5);
	REQUIRE(board->game_over() == false);
	board->mark_board(9);
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test win by first row")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);
	REQUIRE(board->game_over() == false);
	board->mark_board(6);
	REQUIRE(board->game_over() == false);
	board->mark_board(2);
	REQUIRE(board->game_over() == false);
	board->mark_board(4);
	REQUIRE(board->game_over() == false);
	board->mark_board(3);
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test win by second row")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(4);
	REQUIRE(board->game_over() == false);
	board->mark_board(1);
	REQUIRE(board->game_over() == false);
	board->mark_board(5);
	REQUIRE(board->game_over() == false);
	board->mark_board(7);
	REQUIRE(board->game_over() == false);
	board->mark_board(6);
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test win by third row")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(7);
	REQUIRE(board->game_over() == false);
	board->mark_board(6);
	REQUIRE(board->game_over() == false);
	board->mark_board(8);
	REQUIRE(board->game_over() == false);
	board->mark_board(4);
	REQUIRE(board->game_over() == false);
	board->mark_board(9);
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test win diagonally from top left")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);
	REQUIRE(board->game_over() == false);
	board->mark_board(6);
	REQUIRE(board->game_over() == false);
	board->mark_board(5);
	REQUIRE(board->game_over() == false);
	board->mark_board(4);
	REQUIRE(board->game_over() == false);
	board->mark_board(9);
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test win diagonally from top right")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(7);
	REQUIRE(board->game_over() == false);
	board->mark_board(6);
	REQUIRE(board->game_over() == false);
	board->mark_board(5);
	REQUIRE(board->game_over() == false);
	board->mark_board(4);
	REQUIRE(board->game_over() == false);
	board->mark_board(3);
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");
	delete board;
}

TEST_CASE("Test for no winner")
{
	TicTacToe* board = new TicTacToe3();
	board->start_game("O");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);
	REQUIRE(board->game_over() == false);
	board->mark_board(2);
	REQUIRE(board->game_over() == false);
	board->mark_board(3);
	REQUIRE(board->game_over() == false);
	board->mark_board(4);
	REQUIRE(board->game_over() == false);
	board->mark_board(6);
	REQUIRE(board->game_over() == false);
	board->mark_board(5);
	REQUIRE(board->game_over() == false);
	board->mark_board(7);
	REQUIRE(board->game_over() == false);
	board->mark_board(9);
	REQUIRE(board->game_over() == false);
	board->mark_board(8);
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "C");
	delete board;
}