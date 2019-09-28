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
#include "Subject.hpp"
#include "Observer.hpp"
#include <vector>
#include <iostream>

class Zookeeper: public Subject {
public:
    Zookeeper(){
        wakeAnnounce = false;
        roamAnnounce = false;
        feedAnnounce = false;
        noiseAnnounce = false;
        sleepAnnounce = false;
    }
    
    ~Zookeeper(){
        for(auto a: animals){
            delete (a);
        }
    }
    void setActivities(std::string cond);
    
    void addAnimal(Animal* a);
    
    void wake();
    
    void rollCall();
    
    void feed();
    
    void letRoam();
    
    void closeZoo();
    /*Observer Pattern applied here*/
    void registerObserver(Observer* o);
    /*Observer Pattern applied here*/
    void removeObserver(Observer* o);
    /*Observer Pattern applied here*/
    void notifyObserver();
    /*Observer Pattern applied here*/
    void zookeeperChange();
    
private:
    std::string name;
    std::vector<Animal *> animals;
    /*Observer Pattern applied here*/
    std::vector<Observer*> observers;
    bool wakeAnnounce;
    bool roamAnnounce;
    bool feedAnnounce;
    bool noiseAnnounce;
    bool sleepAnnounce;
    
};


#endif /* Zookeeper_hpp */
