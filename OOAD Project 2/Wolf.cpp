//
//  Wolf.cpp
//  OOAD Project 2
//
//  Created by Kyle Schultz on 9/25/19.
//  Copyright © 2019 Kyle Schultz. All rights reserved.
//

#include "Wolf.hpp"


std::string Wolf::eat() {
    std::string name = getName();
    std::string result = name + " of " + getClassname() + " is eating kibble";
    return result;
}

/*
std::string Wolf::makeNoise(){
    std::string name = getName();
    std::string noise = name + " of " + getClassname() + " is howling";
    return noise;
}
*/
