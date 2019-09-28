//
//  FelineNoiseBehavior.hpp
//  OOAD Project 2
//
//  Created by Kyle Schultz on 9/28/19.
//  Copyright © 2019 Kyle Schultz. All rights reserved.
//

#ifndef FelineNoiseBehavior_hpp
#define FelineNoiseBehavior_hpp

#include <stdio.h>
#include "NoiseBehavior.hpp"
/*Strategy pattern applied here*/
class FelineNoiseBehavior : public NoiseBehavior {
public:
    std::string makeNoise();
};

#endif /* FelineNoiseBehavior_hpp */
