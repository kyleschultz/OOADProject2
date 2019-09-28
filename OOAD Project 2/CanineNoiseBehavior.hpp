//
//  CanineNoiseBehavior.hpp
//  OOAD Project 2
//
//  Created by Kyle Schultz on 9/28/19.
//  Copyright © 2019 Kyle Schultz. All rights reserved.
//

#ifndef CanineNoiseBehavior_hpp
#define CanineNoiseBehavior_hpp

#include "NoiseBehavior.hpp"
/*Strategy pattern applied here*/
class CanineNoiseBehavior : public NoiseBehavior {
public:
    std::string makeNoise();
};
#endif /* CanineNoiseBehavior_hpp */
