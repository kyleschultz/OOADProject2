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
    
    //create Zookeeper
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
    
    //wake up animals
    Zoe->wake();
    
    //roll call animals
    Zoe->rollCall();
    
    //feed animals
    Zoe->feed();
    
    //let animals roam
    Zoe->letRoam();
    
    //put animals to sleep
    Zoe->closeZoo();
    /*Observer Pattern applied here*/
    Zoe->removeObserver(announcer);
    
    //delete zookeeper
    delete(Zoe);
    
    return 0;
}
