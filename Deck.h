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

    void removeCard(Card& c);
    void addCard(Card& c);
    Card draw();
    void shuffle(Deck& deck, RandomGenertator& rng);








private:
    std::vector<Card> deck;
    std::vector<Card> discardPile;
    std::vector<Card> startingHand;
    Card phantomCard;











};


#endif //UNO_DECK_H
