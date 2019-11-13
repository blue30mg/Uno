#include <iostream>
#include <fstream>
#include <chrono>
#include <random>
#include <string>
#include "Deck.h"


int main(int argc, char* argv[]) {

    std::string deckfile = argv[1];
    std::string rulefile = argv[2];

    std::minstd_rand random;
    int seed = std::chrono::system_clock::now().time_since_epoch().count();

    if(argc > 3){
        seed = atoi(argv[3]);
    }else{
        time(nullptr);
    }




    return 0;
}