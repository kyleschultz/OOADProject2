//
//  Canine.cpp
//  OOAD Project 2
//
//  Created by Kyle Schultz on 9/23/19.
//  Copyright © 2019 Kyle Schultz. All rights reserved.
//

#include "Canine.hpp"


std::string Canine::eat() {
    std::string name = getName();
    std::string result = name + " of " + getClassname() + " is eating Meat";
    return result;
}

std::string Canine::makeNoise(){
    std::string name = getName();
    std::string noise = name + " of " + getClassname() + " is barking";
    return noise;
}
 
