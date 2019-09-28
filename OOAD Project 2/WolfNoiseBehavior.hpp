//
//  WolfNoiseBehavior.hpp
//  OOAD Project 2
//
//  Created by Kyle Schultz on 9/28/19.
//  Copyright © 2019 Kyle Schultz. All rights reserved.
//

#ifndef WolfNoiseBehavior_hpp
#define WolfNoiseBehavior_hpp

#include <stdio.h>
#include "NoiseBehavior.hpp"

class WolfNoiseBehavior : public NoiseBehavior {
public:
    std::string makeNoise();
};

#endif /* WolfNoiseBehavior_hpp */
