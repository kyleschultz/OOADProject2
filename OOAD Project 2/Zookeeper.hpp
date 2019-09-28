//
//  Zookeeper.hpp
//  OOAD Project 2
//
//  Created by Kyle Schultz on 9/25/19.
//  Copyright © 2019 Kyle Schultz. All rights reserved.
//

#ifndef Zookeeper_hpp
#define Zookeeper_hpp

#include <stdio.h>
#include "Animal.hpp"
#include <vector>
#include <iostream>

class Zookeeper {
public:
    Zookeeper(){
        
    }
    
    void addAnimal(Animal* a);
    /*{
        animals.push_back(a);
    }
     */
    
    void wake();
    /*{
        for(auto a: animals){
            std::cout << a->setAsleep(false) + "\n";
        }
    }
     */
    
    void rollCall();
    /*{
        for(auto a: animals){
            std::cout << a->makeNoise() + "\n";
        }
    }
     */
    
    void feed();
    /*{
        for(auto a: animals){
            std::cout << a->eat() + "\n";
        }
    }
     */
    
    void letRoam();
    /*{
        for(auto a: animals){
            std::cout << a->roam() + "\n";
        }
    }
     */
    
    void closeZoo();
    /*{
        for(auto a: animals){
            std::cout << a->setAsleep(true) + "\n";
        }
    }
     */
    
private:
    std::string name;
    std::vector<Animal *> animals;
    
};


#endif /* Zookeeper_hpp */
