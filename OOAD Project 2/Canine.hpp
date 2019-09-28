//
//  Canine.hpp
//  OOAD Project 2
//
//  Created by Kyle Schultz on 9/23/19.
//  Copyright © 2019 Kyle Schultz. All rights reserved.
//

#ifndef Canine_hpp
#define Canine_hpp

#include "Animal.hpp"
#include "NoiseBehavior.hpp"
#include "CanineNoiseBehavior.hpp"
#include <stdio.h>
#include <string>

class Canine : public Animal{
public:
    Canine(){
        CanineNoiseBehavior* nb = new CanineNoiseBehavior();
        setNoiseBehavior(nb);
    }
    
    Canine(std::string name, std::string className){
        setClassname(className);
        setName(name);
        CanineNoiseBehavior* nb = new CanineNoiseBehavior();
        setNoiseBehavior(nb);
    }
    
    std::string eat();
    /*{
        std::string name = getName();
        std::string result = name + " of " + getClassname() + " is eating Meat";
        return result;
    }
     */
    
    //std::string makeNoise();
    /*{
        std::string name = getName();
        std::string noise = name + " of " + getClassname() + " is barking";
        return noise;
    }
     */
};

#endif /* Canine_hpp */


