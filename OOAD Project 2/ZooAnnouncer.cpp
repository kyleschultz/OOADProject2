#include "ZooAnnouncer.hpp"

/*
 Observer Pattern applied here
 Updates the Announcer to take action
 @param wakeAnnounce Boolean to check if zookeeper is waking the animals, roamAnnounce Boolean to check if zookeeper is letting the animals roam, noiseAnnounce Boolean to check if zookeeper is roll calling the animals, sleepAnnounce Boolean to check if zookeeper is putting the animals to sleep
 */
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

/*
 ZooAnnouncer announce the next action
 @param condition String of the action that is going to take place
 */
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
