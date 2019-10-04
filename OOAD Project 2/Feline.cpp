#include "Feline.hpp"

/*
 Notifies that the Feline is eating
 @return result String of Feline's eating action
 */
std::string Feline::eat() {
    std::string name = getName();
    std::string result = name + " of " + getClassname() + " is eating Feline food";
    return result;
}
