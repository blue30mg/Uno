//
// Created by aldo_ on 11/13/2019.
//



#ifndef UNO_STARTINGHAND_H
#define UNO_STARTINGHAND_H

#include <vector>
#include "Card.h"
#include "Deck.h"


class StartingHand : public Deck{

public:
    StartingHand(Deck deck);





private:
    std::vector<Card> hand;






};


#endif //UNO_STARTINGHAND_H
