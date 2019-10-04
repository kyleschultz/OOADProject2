#ifndef CanineNoiseBehavior_hpp
#define CanineNoiseBehavior_hpp

#include "NoiseBehavior.hpp"
/*
 Strategy pattern applied here
 Implements abstact class NoiseBehavior
 */
class CanineNoiseBehavior : public NoiseBehavior {
public:
    std::string makeNoise();
};
#endif /* CanineNoiseBehavior_hpp */
