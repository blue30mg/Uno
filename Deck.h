//
// Created by aldo_ on 11/5/2019.
//

#ifndef UNO_DECK_H
#define UNO_DECK_H

#include <vector>
#include <string>
#include "Card.h"


class Deck {

public:
    Deck(std::string fileName);
    Deck(Card card);

    void removeCard();
    void addCard(Card c);
    Card draw();








private:
    std::vector<Card> deck;











};


#endif //UNO_DECK_H
