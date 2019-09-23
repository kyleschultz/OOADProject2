//
//  Animal.hpp
//  OOAD Project 2
//
//  Created by Kyle Schultz on 9/23/19.
//  Copyright © 2019 Kyle Schultz. All rights reserved.
//

#ifndef Animal_hpp
#define Animal_hpp

#include <stdio.h>
#include <string>

class Animal {
public:
    Animal(){
        is_asleep = true;
    }
    
    Animal(std::string name, std::string className){
        classname = className;
        name = name;
    }
    
    std::string getName(){
        classname = "Animal";
        return name;
    }
    
    void setName(std::string name){
        name = name;
    }
    
    bool getAsleep(){
        return is_asleep;
    }
    
    std::string getClassname(){
        return classname;
    }
    
    void setClassname(std::string className){
        classname = className;
    }
    
    std::string setAsleep(bool asleep);
    
    virtual std::string roam();
    
    virtual std::string eat();
    
    virtual std::string makeNoise();
    
private:
    std::string name;
    bool is_asleep;
    std::string classname;
};

#endif /* Animal_hpp */
