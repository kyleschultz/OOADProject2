#ifndef WolfNoiseBehavior_hpp
#define WolfNoiseBehavior_hpp

#include <stdio.h>
#include "NoiseBehavior.hpp"
/*
 Strategy pattern applied here
 Implements abstact class NoiseBehavior
 */

class WolfNoiseBehavior : public NoiseBehavior {
public:
    std::string makeNoise();
};

#endif /* WolfNoiseBehavior_hpp */
