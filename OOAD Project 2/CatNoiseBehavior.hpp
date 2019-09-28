//
//  CatNoiseBehavior.hpp
//  OOAD Project 2
//
//  Created by Kyle Schultz on 9/28/19.
//  Copyright © 2019 Kyle Schultz. All rights reserved.
//

#ifndef CatNoiseBehavior_hpp
#define CatNoiseBehavior_hpp

#include <stdio.h>
#include "NoiseBehavior.hpp"
/*Strategy pattern applied here*/
class CatNoiseBehavior : public NoiseBehavior {
public:
    std::string makeNoise();
};

#endif /* CatNoiseBehavior_hpp */
