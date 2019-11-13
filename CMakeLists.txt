cmake_minimum_required(VERSION 3.13)
project(Uno)

set(CMAKE_CXX_STANDARD 14)

add_executable(Uno main.cpp Deck.cpp Deck.h Card.cpp Card.h Game.cpp Game.h Player.cpp Player.h StartingHand.cpp StartingHand.h Move.cpp Move.h)