#ifndef Announcer_hpp
#define Announcer_hpp

#include <stdio.h>
#include "Observer.hpp"
#include "DisplayElement.hpp"
#include "Subject.hpp"
#include <string>
#include <vector>
#include <iostream>

/*Observer Pattern applied here*/
class ZooAnnouncer: public Observer, public DisplayElement {
public:
    /*
        Constructor that registers itself as an observer of the subject
        @param z Subject to register to
    */
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
