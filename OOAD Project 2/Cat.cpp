//
//  Cat.cpp
//  OOAD Project 2
//
//  Created by Kyle Schultz on 9/25/19.
//  Copyright © 2019 Kyle Schultz. All rights reserved.
//

#include "Cat.hpp"


std::string Cat::eat(){
    return catDoSomething();
}

//std::string Cat::makeNoise(){
//    return catDoSomething();
//}

std::string Cat::roam(){
    return catDoSomething();
}

std::string Cat::catDoSomething(){
    int randChoice = rand() % 3;
    std::string result;
    switch (randChoice) {
        case 0:
            result = getName() + " of " + getClassname() + " is eating fancy feast";
            break;
        /*case 1:
            result = getName() + " of " + getClassname() + " is purring";
            break;
        */
        case 1:
            result = getName() + " of " + getClassname() + " is roaming";
        default:
            break;
    }
    return result;
}


