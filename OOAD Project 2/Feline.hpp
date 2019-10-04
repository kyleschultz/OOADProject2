#ifndef Feline_hpp
#define Feline_hpp

#include <stdio.h>
#include "Animal.hpp"
#include "FelineNoiseBehavior.hpp"

class Feline: public Animal{
public:
    /*
     Default constructor
     */
    Feline(){
        
    }
    
    /*
     Secondary constructor that sets name, classname and noiseBehavior
     @param name Name of Feline, className Name of Wolf class
     */
    Feline(std::string name, std::string className){
        setClassname(className);
        setName(name);
        /*Strategy pattern applied here*/
        FelineNoiseBehavior* nb = new FelineNoiseBehavior();
        setNoiseBehavior(nb);
    }
    
    std::string eat();
};

#endif /* Feline_hpp */
