#ifndef Wolf_hpp
#define Wolf_hpp

#include <stdio.h>
#include "Canine.hpp"
#include "WolfNoiseBehavior.hpp"


class Wolf: public Canine{
public:
    /*
     Default constructor
     */
    Wolf(){
        
    }
    
    /*
     Secondary constructor that sets name, classname and noiseBehavior
     @param name Name of Wolf, className Name of Wolf class
     */
    Wolf(std::string name, std::string className){
        setClassname(className);
        setName(name);
        /*Strategy pattern applied here*/
        WolfNoiseBehavior* nb = new WolfNoiseBehavior();
        setNoiseBehavior(nb);
    }
    
    std::string eat();
    
};

#endif /* Wolf_hpp */
