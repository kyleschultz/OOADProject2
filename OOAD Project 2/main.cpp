//
//  main.cpp
//  OOAD Project 2
//
//  Created by Kyle Schultz on 9/23/19.
//  Copyright © 2019 Kyle Schultz. All rights reserved.
//

#include <iostream>
#include "Animal.cpp"
#include "Feline.cpp"
#include "Cat.cpp"
#include "Canine.cpp"
#include "Wolf.cpp"
#include "Zookeeper.cpp"
#include "ZooAnnouncer.cpp"
#include "CatNoiseBehavior.cpp"
#include "CanineNoiseBehavior.cpp"
#include "FelineNoiseBehavior.cpp"
#include "WolfNoiseBehavior.cpp"

int main(int argc, const char * argv[]) {
    
    Zookeeper* Zoe = new Zookeeper();
    /*Observer Pattern applied here*/
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
    /*Observer Pattern applied here*/
    Zoe->removeObserver(announcer);
    
    delete(Zoe);
    
    return 0;
}
