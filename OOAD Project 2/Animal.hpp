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
#include "NoiseBehavior.hpp"

class Animal {
public:
    Animal(){
        is_asleep = true;
    }
    
    Animal(std::string name_, std::string className){
        classname = className;
        name = name_;
    }
    
    void setNoiseBehavior(NoiseBehavior* nb){
        noiseBehavior = nb;
    }
    
    std::string getName(){
        return name;
    }
    
    void setName(std::string name_){
        name = name_;
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
    /*{
        is_asleep = asleep;
        if(!is_asleep){
            return name + " of " + classname + " is awake";
        }
        else{
            return name + " of " + classname + " is awake";
        }
    }
     */
    
    virtual std::string roam();
    /*{
        return name + " of " + classname + " is roaming";
    }
    */
    virtual std::string eat();
    /*{
        return "";
    }
     */
    
    virtual std::string performNoise();
    /*{
        return "";
    }
    */
private:
    std::string name;
    bool is_asleep;
    std::string classname;
    NoiseBehavior* noiseBehavior;
};

#endif /* Animal_hpp */
