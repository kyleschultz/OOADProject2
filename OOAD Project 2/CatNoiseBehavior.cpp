//
//  CatNoiseBehavior.cpp
//  OOAD Project 2
//
//  Created by Kyle Schultz on 9/28/19.
//  Copyright © 2019 Kyle Schultz. All rights reserved.
//

#include "CatNoiseBehavior.hpp"
/*Strategy pattern applied here*/
std::string CatNoiseBehavior::makeNoise(){
    std::string noise = " is purring";
    return noise;
}
