#ifndef NoiseBehavior_hpp
#define NoiseBehavior_hpp

#include <stdio.h>
#include <iostream>
#include <string>

/*
 Strategy pattern applied here
 Abstract class for interface
 */
class NoiseBehavior {
public:
    //pure virtual function
    virtual std::string makeNoise() = 0;
};

#endif /* NoiseBehavior_hpp */
