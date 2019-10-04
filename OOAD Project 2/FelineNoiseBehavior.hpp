#ifndef FelineNoiseBehavior_hpp
#define FelineNoiseBehavior_hpp

#include <stdio.h>
#include "NoiseBehavior.hpp"
/*
 Strategy pattern applied here
 Implements abstact class NoiseBehavior
 */
class FelineNoiseBehavior : public NoiseBehavior {
public:
    std::string makeNoise();
};

#endif /* FelineNoiseBehavior_hpp */
