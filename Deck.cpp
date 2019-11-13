//
// Created by aldo_ on 11/5/2019.
//
#include <iostream>
#include <algorithm>
#include <random>
#include <fstream>
#include "Deck.h"


Deck::Deck(std::string fileName) {
    std::ifstream deckfile;
    deckfile.open(fileName);
    std::string numofcard;
    std::string color;
    std::string value;
    if(deckfile.is_open()){
        while(!deckfile.eof()){
            std::getline(deckfile, numofcard, ' ');
            int cardnums = std::stoi(numofcard);
            std::getline(deckfile, color, ' ');
            std::getline(deckfile, value, '\n');
            int cardValue =  std::stoi(value);
            std::pair <std::string,int> makeCard;
            makeCard = std::make_pair (color, cardValue);
            for(int i = 0; i < cardnums; i++) {
                deck.emplace_back(Card(makeCard));
            }

        }
    }else{
        std::cout << "file didn't open" << std::endl;
    }
    deckfile.close();




}

Deck::Deck(Card card) {
    deck.push_back(card);
}

void Deck::removeCard(Card& c, Deck typeDeck) {
    //add into
    typeDeck.emplace_back(c);
    //erase
    deck.erase()


}

void Deck::addCard(Card& c) {
    deck.emplace_back(c);
}

void Deck::shuffle(Deck& deck, RandomGenerator& rng) {
    deck.shuffle(deck.begin(), deck.end(), )




}
