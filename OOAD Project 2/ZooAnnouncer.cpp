//
//  Announcer.cpp
//  OOAD Project 2
//
//  Created by Kyle Schultz on 9/28/19.
//  Copyright © 2019 Kyle Schultz. All rights reserved.
//

#include "ZooAnnouncer.hpp"


void ZooAnnouncer::update(bool wakeAnnounce, bool roamAnnounce, bool feedAnnounce, bool noiseAnnounce, bool sleepAnnounce){
    if(wakeAnnounce){
        announce("wake");
    }
    else if(roamAnnounce){
        announce("roam");
    }
    else if (feedAnnounce){
        announce("feed");
    }
    else if (noiseAnnounce){
        announce("noise");
    }
    else if (sleepAnnounce){
        announce("sleep");
    }
}

void ZooAnnouncer::announce(std::string condition){
    if (condition == "wake") {
        std::cout << "\nThis is the zoo announcer, the Zookeeper is about to wake the animals\n\n";
    }
    else if (condition == "roam"){
        std::cout << "\nThis is the zoo announcer, the Zookeeper is about to let the animals roam\n\n";
    }
    else if (condition == "feed"){
        std::cout << "\nThis is the zoo announcer, the Zookeeper is about to feed the animals\n\n";
    }
    else if (condition == "noise"){
        std::cout << "\nThis is the zoo announcer, the Zookeeper is about to roll call the animals\n\n";
    }
    else if (condition == "sleep"){
        std::cout << "\nThis is the zoo announcer, the Zookeeper is about to put the animals to sleep\n\n";
    }
}
