#include "Wolf.hpp"

/*
 Notifies that the Wolf is eating
 @return result String of Wolf's eating action
 */
std::string Wolf::eat() {
    std::string name = getName();
    std::string result = name + " of " + getClassname() + " is eating kibble";
    return result;
}
