#include "Canine.hpp"

/*
 Notifies that the Canine is eating
 @return result String of Canine's eating action
 */

std::string Canine::eat() {
    std::string name = getName();
    std::string result = name + " of " + getClassname() + " is eating Meat";
    return result;
}
 
