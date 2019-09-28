//
//  NoiseBehavior.hpp
//  OOAD Project 2
//
//  Created by Kyle Schultz on 9/28/19.
//  Copyright © 2019 Kyle Schultz. All rights reserved.
//

#ifndef NoiseBehavior_hpp
#define NoiseBehavior_hpp

#include <stdio.h>
#include <iostream>
#include <string>

class NoiseBehavior {
public:
    //pure virtual function
    virtual std::string makeNoise() = 0;
};

#endif /* NoiseBehavior_hpp */
