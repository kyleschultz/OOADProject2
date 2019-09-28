//
//  Feline.hpp
//  OOAD Project 2
//
//  Created by Kyle Schultz on 9/25/19.
//  Copyright © 2019 Kyle Schultz. All rights reserved.
//

#ifndef Feline_hpp
#define Feline_hpp

#include <stdio.h>
#include "Animal.hpp"
#include "FelineNoiseBehavior.hpp"

class Feline: public Animal{
public:
    Feline(){
        
    }
    
    Feline(std::string name, std::string className){
        setClassname(className);
        setName(name);
        FelineNoiseBehavior* nb = new FelineNoiseBehavior();
        setNoiseBehavior(nb);
    }
    
    std::string eat();
    /*{
        std::string name = getName();
        std::string result = name + " of " + getClassname() + " is eating Feline food";
        return result;
    }
     */
    
    //std::string makeNoise();
    /*{
        std::string name = getName();
        std::string noise = name + " of " + getClassname() + " is meowing";
        return noise;
    }
     */
    
};

#endif /* Feline_hpp */
