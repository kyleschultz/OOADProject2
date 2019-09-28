//
//  Feline.cpp
//  OOAD Project 2
//
//  Created by Kyle Schultz on 9/25/19.
//  Copyright © 2019 Kyle Schultz. All rights reserved.
//

#include "Feline.hpp"


std::string Feline::eat() {
    std::string name = getName();
    std::string result = name + " of " + getClassname() + " is eating Feline food";
    return result;
}

std::string Feline::makeNoise(){
    std::string name = getName();
    std::string noise = name + " of " + getClassname() + " is meowing";
    return noise;
}

