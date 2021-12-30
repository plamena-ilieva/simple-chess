cmake_minimum_required(VERSION 3.20)
project(simple_chess)

set(CMAKE_CXX_STANDARD 14)

add_executable(simple_chess main.cpp mainMenu.cpp mainMenu.h defineBoardSize.cpp defineBoardSize.h play.cpp play.h generateBoard.cpp generateBoard.h printBoard.cpp printBoard.h findCoordinates.cpp findCoordinates.h isCheckmate.cpp isCheckmate.h botMove.cpp botMove.h containsObstacles.cpp containsObstacles.h)
