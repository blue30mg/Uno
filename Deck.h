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

    void removeCard(Card& c, Deck& typeDeck);
    void addCard(Card& c);
    void startingDeck(Deck& deck);
    void discardDeck(Deck& deck);
    void shuffle(Deck& deck, RandomNumberGenerator& rng, int seed);
    Card draw();

    template<typename RandomNumberGenerator>
    int getRandomInt(int min, int max, RandomNumberGenerator& rng);







private:
    std::vector<Card> deck;
    std::vector<Card> discardPile;
    std::vector<Card> startingHand;
    Card phantomCard;











};


#endif //UNO_DECK_H
