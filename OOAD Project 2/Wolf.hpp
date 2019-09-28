//
//  Wolf.hpp
//  OOAD Project 2
//
//  Created by Kyle Schultz on 9/25/19.
//  Copyright © 2019 Kyle Schultz. All rights reserved.
//

#ifndef Wolf_hpp
#define Wolf_hpp

#include <stdio.h>
#include "Canine.hpp"
#include "WolfNoiseBehavior.hpp"


class Wolf: public Canine{
public:
    Wolf(){
        
    }
    
    
    Wolf(std::string name, std::string className){
        setClassname(className);
        setName(name);
        WolfNoiseBehavior* nb = new WolfNoiseBehavior();
        setNoiseBehavior(nb);
    }
    
    std::string eat();
    /*{
        std::string name = getName();
        std::string result = name + " of " + getClassname() + " is eating kibble";
        return result;
    }
     */
    
    //std::string makeNoise();
    /*{
        std::string name = getName();
        std::string noise = name + " of " + getClassname() + " is howling";
        return noise;
    }
     */
    
};

#endif /* Wolf_hpp */
