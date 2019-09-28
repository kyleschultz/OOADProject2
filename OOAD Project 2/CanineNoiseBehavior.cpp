//
//  CanineNoiseBehavior.cpp
//  OOAD Project 2
//
//  Created by Kyle Schultz on 9/28/19.
//  Copyright © 2019 Kyle Schultz. All rights reserved.
//

#include "CanineNoiseBehavior.hpp"



std::string CanineNoiseBehavior::makeNoise(){
    std::string name = getName();
    std::string noise = name + " of " + getClassname() + " is barking";
    return noise;
}

