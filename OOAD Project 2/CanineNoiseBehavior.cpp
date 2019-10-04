#include "CanineNoiseBehavior.hpp"
/*
 Strategy pattern applied here
 Implements makeNoise from abstract class
 @return noise String of canine noise
 */
std::string CanineNoiseBehavior::makeNoise(){
    std::string noise = " is barking";
    return noise;
}

