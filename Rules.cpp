//
// Created by aldo_ on 11/14/2019.
//



#include <iostream>
#include "Rules.h"

Rules::Rules(std::string fileName) {
    std::ifstream ruleFile;
    ruleFile.open(fileName);
    std::string value;
    while(!ruleFile.eof()){
        std::getline(ruleFile, ruleName,":");
        std::getline(ruleFile, value, "\n")
        ruleValue = std::stoi(value);

    }
}
