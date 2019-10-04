#ifndef CatNoiseBehavior_hpp
#define CatNoiseBehavior_hpp

#include <stdio.h>
#include "NoiseBehavior.hpp"
/*
 Strategy pattern applied here
 Implements abstact class NoiseBehavior
 */
class CatNoiseBehavior : public NoiseBehavior {
public:
    std::string makeNoise();
};

#endif /* CatNoiseBehavior_hpp */
