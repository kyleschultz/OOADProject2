#include "CatNoiseBehavior.hpp"
/*
 Strategy pattern applied here
 Implements makeNoise from abstract class
 @return noise String of cat noise
 */
std::string CatNoiseBehavior::makeNoise(){
    std::string noise = " is purring";
    return noise;
}
