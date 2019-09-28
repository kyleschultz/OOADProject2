//
//  Cat.hpp
//  OOAD Project 2
//
//  Created by Kyle Schultz on 9/25/19.
//  Copyright © 2019 Kyle Schultz. All rights reserved.
//

#ifndef Cat_hpp
#define Cat_hpp

#include <stdio.h>
#include "Feline.hpp"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "CatNoiseBehavior.hpp"

class Cat : public Feline {
public:
    Cat(){
        srand(time(NULL));
    }
    
    Cat(std::string name, std::string className){
        srand(time(NULL));
        setClassname(className);
        setName(name);
        CatNoiseBehavior* nb = new CatNoiseBehavior();
        setNoiseBehavior(nb);
    }
    
    std::string eat();
    /*{
        return catDoSomething();
    }
     */
    
    //std::string makeNoise();
    /*{
        return catDoSomething();
    }
     */
    
    std::string roam();
    /*{
        return catDoSomething();
    }
     */
    
    std::string catDoSomething();
    /*{
        int randChoice = rand() % 3;
        std::string result;
        switch (randChoice) {
            case 0:
                result = getName() + " of " + getClassname() + " is eating fancy feast";
                break;
            case 1:
                result = getName() + " of " + getClassname() + " is purring";
                break;
            case 2:
                result = getName() + " of " + getClassname() + " is roaming";
            default:
                break;
        }
        return result;
    }
     */
};


#endif /* Cat_hpp */
