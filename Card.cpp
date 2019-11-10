//
// Created by aldo_ on 11/5/2019.
//


#include "Card.h"

Card::Card(std::string card_color, int card_value) : color(card_color), value(card_value) {

}

Card::Card(std::pair<std::string, int> cardPair) : color(cardPair.first) , value(cardPair.second) {
    //make the string in pair to the color and make the int in pair to the value
    //use std::make_pair

}

std::string Card::getColor() const {
    return color;
}

void Card::setColor(const std::string& c) {
    Card::color = c;

}

int Card::getValue() const {
    return value;
}

void Card::setValue(int value) {
    Card::value = value;
}

bool Card::compareCard(const Card& card1, const Card& card2) {
    if(card1.getColor() == card2.getColor() or card1.getValue() == card2.getValue() ){
        return true;
    }else{
        return false;
    }

}


