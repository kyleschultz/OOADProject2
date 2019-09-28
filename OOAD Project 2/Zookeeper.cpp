//
//  Zookeeper.cpp
//  OOAD Project 2
//
//  Created by Kyle Schultz on 9/25/19.
//  Copyright © 2019 Kyle Schultz. All rights reserved.
//

#include "Zookeeper.hpp"
#include "Animal.hpp"

/*Observer Pattern applied here*/
void Zookeeper::setActivities(std::string cond){
    if(cond == "wake"){
        wakeAnnounce = true;
        roamAnnounce = false;
        feedAnnounce = false;
        noiseAnnounce = false;
        sleepAnnounce = false;
    }
    else if (cond == "roam"){
        wakeAnnounce = false;
        roamAnnounce = true;
        feedAnnounce = false;
        noiseAnnounce = false;
        sleepAnnounce = false;
    }
    else if (cond == "feed"){
        wakeAnnounce = false;
        roamAnnounce = false;
        feedAnnounce = true;
        noiseAnnounce = false;
        sleepAnnounce = false;
    }
    else if(cond == "noise"){
        wakeAnnounce = false;
        roamAnnounce = false;
        feedAnnounce = false;
        noiseAnnounce = true;
        sleepAnnounce = false;
    }
    else if(cond == "sleep"){
        wakeAnnounce = false;
        roamAnnounce = false;
        feedAnnounce = false;
        noiseAnnounce = false;
        sleepAnnounce = true;
    }
}

void Zookeeper::addAnimal(Animal* a){
    animals.push_back(a);
}

void Zookeeper::wake(){
    /*Observer Pattern applied here*/
    setActivities("wake");
    zookeeperChange();
    for(auto a: animals){
        std::cout << a->setAsleep(false) + "\n";
    }
}


void Zookeeper::rollCall(){
    /*Observer Pattern applied here*/
    setActivities("noise");
    zookeeperChange();
    for(auto a: animals){
        std::cout << a->performNoise() + "\n";
    }
}


void Zookeeper::feed(){
    /*Observer Pattern applied here*/
    setActivities("feed");
    zookeeperChange();
    for(auto a: animals){
        std::cout << a->eat() + "\n";
    }
}

void Zookeeper::letRoam(){
    /*Observer Pattern applied here*/
    setActivities("roam");
    zookeeperChange();
    for(auto a: animals){
        std::cout << a->roam() + "\n";
    }
}

void Zookeeper::closeZoo(){
    /*Observer Pattern applied here*/
    setActivities("sleep");
    zookeeperChange();
    for(auto a: animals){
        std::cout << a->setAsleep(true) + "\n";
    }
}
/*Observer Pattern applied here*/
void Zookeeper::registerObserver(Observer *o){
    observers.push_back(o);
}
/*Observer Pattern applied here*/
void Zookeeper::removeObserver(Observer *o){
    observers.clear();
    delete(o);
}
/*Observer Pattern applied here*/
void Zookeeper::notifyObserver(){
    for (int i = 0; i < observers.size(); i++) {
        Observer* obs = observers[i];
        obs->update(wakeAnnounce, roamAnnounce, feedAnnounce, noiseAnnounce, sleepAnnounce);
    }
}
/*Observer Pattern applied here*/
void Zookeeper::zookeeperChange(){
    notifyObserver();
}
