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
#include "ZooAnnouncer.hpp"


int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    
    //Animal* Willie = new Wolf("Willie", "Wolf");
    //std::cout << Willie->getName();
    //std::cout << "Here!\n";
    
    Zookeeper* Zoe = new Zookeeper();
    ZooAnnouncer* announcer = new ZooAnnouncer(Zoe);
    Animal* Frank = new Feline("Frank", "Feline");
    Animal* Fiona = new Feline("Fiona", "Feline");
    Zoe->addAnimal(Frank);
    Zoe->addAnimal(Fiona);
    
    Animal* Catthew = new Cat("Catthew", "Cat");
    Animal* Carl = new Cat("Carl", "Cat");
    Zoe->addAnimal(Catthew);
    Zoe->addAnimal(Carl);
    
    Animal* Chloe = new Canine("Chloe", "Canine");
    Animal* Cassidy = new Canine("Cassidy", "Canine");
    Zoe->addAnimal(Chloe);
    Zoe->addAnimal(Cassidy);
    
    Animal* William = new Wolf("William", "Wolf");
    Animal* Winnie = new Wolf("Winnie", "Wolf");
    Zoe->addAnimal(William);
    Zoe->addAnimal(Winnie);
    
    Zoe->wake();
    
    Zoe->rollCall();
    
    Zoe->feed();
    
    Zoe->letRoam();
    
    Zoe->closeZoo();
    
    Zoe->removeObserver(announcer);
    
    
    
    
    return 0;
}
