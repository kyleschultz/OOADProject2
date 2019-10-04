#ifndef Cat_hpp
#define Cat_hpp

#include <stdio.h>
#include "Feline.hpp"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "CatNoiseBehavior.hpp"

class Cat : public Feline {
public:
    /*
        Default constructor
    */
    Cat(){
        srand(time(NULL));
    }
    
    /*
        Secondary constructor
        @param name Name of the cat, className Name of class
    */
    Cat(std::string name, std::string className){
        srand(time(NULL));
        setClassname(className);
        setName(name);
        /*Strategy pattern applied here*/
        CatNoiseBehavior* nb = new CatNoiseBehavior();
        //set cats noise behavior
        setNoiseBehavior(nb);
    }
    
    //override eat
    std::string eat();
    
    //override roam
    std::string roam();
    
    //random cat action
    std::string catDoSomething();
};


#endif /* Cat_hpp */
