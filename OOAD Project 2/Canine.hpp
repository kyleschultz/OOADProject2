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
#include <stdio.h>
#include <string>

class Canine : public Animal{
public:
    Canine(){
        
    }
    
    Canine(std::string name, std::string className){
        setClassname(className);
        setName(name);
    }
    
    virtual std::string eat();
    
    virtual std::string makeNoise();
    
};

#endif /* Canine_hpp */


