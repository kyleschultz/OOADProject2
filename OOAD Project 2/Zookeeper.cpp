//
//  Zookeeper.cpp
//  OOAD Project 2
//
//  Created by Kyle Schultz on 9/25/19.
//  Copyright © 2019 Kyle Schultz. All rights reserved.
//

#include "Zookeeper.hpp"
#include "Animal.hpp"

void Zookeeper::addAnimal(Animal* a){
    animals.push_back(a);
}

void Zookeeper::wake(){
    for(auto a: animals){
        std::cout << a->setAsleep(false) + "\n";
    }
}

void Zookeeper::rollCall(){
    for(auto a: animals){
        std::cout << a->makeNoise() + "\n";
    }
}

void Zookeeper::feed(){
    for(auto a: animals){
        std::cout << a->eat() + "\n";
    }
}

void Zookeeper::letRoam(){
    for(auto a: animals){
        std::cout << a->roam() + "\n";
    }
}

void Zookeeper::closeZoo(){
    for(auto a: animals){
        std::cout << a->setAsleep(true) + "\n";
    }
}
