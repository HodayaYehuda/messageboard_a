
#include "doctest.h"
#include <string>
#include "Board.hpp"
#include "Direction.hpp"
using ariel::Direction;
using namespace ariel;
using namespace std;

TEST_CASE("Good board code") {
ariel::Board board;
	board.post(100, 200, Direction::Horizontal, "test0");
CHECK(board.read(100, 200, Direction::Horizontal, 4) == string("test0"));

board.post(150, 250, Direction::Horizontal, "test1");
CHECK(board.read(150, 250, Direction::Horizontal, 4) == string("test1"));

board.post(0, 10, Direction::Vertical, "test2");
CHECK(board.read(0, 10, Direction::Vertical, 4) == string("test2"));




}

TEST_CASE("Bad snowman code") {
   // CHECK_THROWS(snowman(555));
}

