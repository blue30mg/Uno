//
// Created by aldo_ on 11/8/2019.
//

#ifndef UNO_PLAYER_H
#define UNO_PLAYER_H

#include <string>
#include "Deck.h"


class Player {
public:
    Player(std::string name, Deck& deck);


private:
    std::string name;
    Deck playerDeck;

};


#endif //UNO_PLAYER_H
