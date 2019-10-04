#include "FelineNoiseBehavior.hpp"
/*
 Strategy pattern applied here
 Implements makeNoise from abstract class
 @return noise String of feline noise
 */
std::string FelineNoiseBehavior::makeNoise(){
    std::string noise = " is meowing";
    return noise;
}
