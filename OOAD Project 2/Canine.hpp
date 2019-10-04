#ifndef Canine_hpp
#define Canine_hpp

#include "Animal.hpp"
#include "NoiseBehavior.hpp"
#include "CanineNoiseBehavior.hpp"
#include <stdio.h>
#include <string>

class Canine : public Animal{
public:
    /*
     Defualt constructor
     */
    Canine(){
        /*Strategy pattern applied here*/
        CanineNoiseBehavior* nb = new CanineNoiseBehavior();
        setNoiseBehavior(nb);
    }
    
    /*
     Secondary constructor that sets name, classname and noiseBehavior
     @param name Name of Canine, className Name of Canine class
     */
    Canine(std::string name, std::string className){
        setClassname(className);
        setName(name);
        /*Strategy pattern applied here*/
        CanineNoiseBehavior* nb = new CanineNoiseBehavior();
        setNoiseBehavior(nb);
    }
    
    std::string eat();

};

#endif /* Canine_hpp */


