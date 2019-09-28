//
//  Announcer.hpp
//  OOAD Project 2
//
//  Created by Kyle Schultz on 9/28/19.
//  Copyright © 2019 Kyle Schultz. All rights reserved.
//

#ifndef Announcer_hpp
#define Announcer_hpp

#include <stdio.h>
#include "Observer.hpp"
#include "DisplayElement.hpp"
#include "Subject.hpp"
#include <string>
#include <vector>
#include <iostream>

class ZooAnnouncer: public Observer, public DisplayElement {
public:
    ZooAnnouncer(Subject* z){
        wake = false;
        roam = false;
        feed = false;
        noise = false;
        noise = false;
        sleep = false;
        zookeeper = z;
        zookeeper->registerObserver(this);
    }
    
    void update(bool wakeAnnounce, bool roamAnnounce, bool feedAnnounce, bool noiseAnnounce, bool sleepAnnounce);
    
    void announce(std::string condition);
    
private:
    bool wake;
    bool roam;
    bool feed;
    bool noise;
    bool sleep;
    Subject* zookeeper;
};

#endif /* Announcer_hpp */
