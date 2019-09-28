//
//  Animal.cpp
//  OOAD Project 2
//
//  Created by Kyle Schultz on 9/23/19.
//  Copyright © 2019 Kyle Schultz. All rights reserved.
//

#include "Animal.hpp"

std::string Animal::setAsleep(bool asleep){
    is_asleep = asleep;
    if(!is_asleep){
        return name + " of " + classname + " is awake";
    }
    else{
        return name + " of " + classname + " is awake";
    }
}

std::string Animal::roam(){
    return name + " of " + classname + " is roaming";
}

std::string Animal::eat(){
    return "";
}


std::string Animal::makeNoise(){
    return noiseBehavior->makeNoise();
}


