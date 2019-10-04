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
    /*Strategy pattern being applied here*/
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
    
    virtual std::string roam();
    
    virtual std::string eat();
    
    /*Strategy Pattern applied here*/
    virtual std::string performNoise();
    
private:
    std::string name;
    bool is_asleep;
    std::string classname;
    /*Strategy pattern applied here*/
    NoiseBehavior* noiseBehavior;
};

#endif /* Animal_hpp */
