//
// Created by aldo_ on 11/5/2019.
//

#ifndef UNO_CARD_H
#define UNO_CARD_H

#include <string>


class Card {

public:
    Card(std::pair<std::string, int> cardPair);
    Card(std::string card_color, int value);

    std::string getColor() const ;
    void setColor(const std::string& color);
    int getValue() const;
    void setValue(int value);

    bool compareCard(const Card& card1, const Card& card2);




private:
    //card are made up of value which is fro 0-9 and color Green , Blue, Red, Yellow
    std::string color;
    int value;
    std::pair<std::string,int> cardContents;


};


#endif //UNO_CARD_H
