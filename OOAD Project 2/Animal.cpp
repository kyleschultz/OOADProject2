#include "Animal.hpp"

/*
 Sets animals sleeping status
 @param asleep Boolean for if Animals is being woken up or sleeping
 @return String of animals sleepign status
 */
std::string Animal::setAsleep(bool asleep){
    is_asleep = asleep;
    if(!is_asleep){
        return name + " of " + classname + " is awake";
    }
    else{
        return name + " of " + classname + " is asleep";
    }
}

/*
 Notifies Animals are roaming
 @return String that Animal is roaming
 */
std::string Animal::roam(){
    return name + " of " + classname + " is roaming";
}

/*
 Notifies Animals are eating
 @return Empty string
 */
std::string Animal::eat(){
    return "";
}

/*
 Strategy pattern applied here
 Calls noiseBehavior makeNoise
 @return String of Animals noise behavior
 */
std::string Animal::performNoise(){
    std::string name = getName();
    return name + " of " + getClassname() + noiseBehavior->makeNoise();
}


