#include "WolfNoiseBehavior.hpp"
/*
 Strategy pattern applied here
 Implements makeNoise from abstract class
 @return noise String of wolf noise
 */
std::string WolfNoiseBehavior::makeNoise(){
    std::string noise = " is howling";
    return noise;
}
