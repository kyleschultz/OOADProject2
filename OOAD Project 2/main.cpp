//
//  main.cpp
//  OOAD Project 2
//
//  Created by Kyle Schultz on 9/23/19.
//  Copyright © 2019 Kyle Schultz. All rights reserved.
//

#include <iostream>
#include "Cat.hpp"
#include "Wolf.hpp"
#include "Zookeeper.hpp"


int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    
    //Animal* Willie = new Wolf("Willie", "Wolf");
    //std::cout << Willie->getName();
    //std::cout << "Here!\n";
    
    Zookeeper Zoe;
    Animal* Frank = new Feline("Frank", "Feline");
    Animal* Fiona = new Feline("Fiona", "Feline");
    Zoe.addAnimal(Frank);
    Zoe.addAnimal(Fiona);
    
    Animal* Catthew = new Cat("Catthew", "Cat");
    Animal* Carl = new Cat("Carl", "Cat");
    Zoe.addAnimal(Catthew);
    Zoe.addAnimal(Carl);
    
    Animal* Chloe = new Canine("Chloe", "Canine");
    Animal* Cassidy = new Canine("Cassidy", "Canine");
    Zoe.addAnimal(Chloe);
    Zoe.addAnimal(Cassidy);
    
    Animal* William = new Wolf("William", "Wolf");
    Animal* Winnie = new Wolf("Winnie", "Wolf");
    Zoe.addAnimal(William);
    Zoe.addAnimal(Winnie);
    
    std::cout << "Zookeker is waking the animals.\n\n";
    Zoe.wake();
    
    std::cout << "------------------------------------\n";
    std::cout << "Zookeker is roll calling the animals.\n\n";
    Zoe.rollCall();
    
    std::cout << "------------------------------------\n";
    std::cout << "Zookeker is feeding animals.\n\n";
    Zoe.feed();
    
    std::cout << "------------------------------------\n";
    std::cout << "Zookeker is letting animals roam.\n\n";
    Zoe.letRoam();
    
    std::cout << "------------------------------------\n";
    std::cout << "Zookeker is closing the zoo.\n\n";
    Zoe.closeZoo();
    
    
    return 0;
}
