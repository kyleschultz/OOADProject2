#include "Cat.hpp"

/*
 Cat performs random action
 */
std::string Cat::eat(){
    return catDoSomething();
}

/*
 Cat performs random action
 */
std::string Cat::roam(){
    return catDoSomething();
}

/*
    Chooses random action of cat eating or roaming
 */
std::string Cat::catDoSomething(){
    int randChoice = rand() % 2;
    std::string result;
    switch (randChoice) {
        case 0:
            result = getName() + " of " + getClassname() + " is eating fancy feast";
            break;
        case 1:
            result = getName() + " of " + getClassname() + " is roaming";
        default:
            break;
    }
    return result;
}


