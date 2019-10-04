#include "Zookeeper.hpp"
#include "Animal.hpp"

/*
 Observer Pattern applied here
 Sets boolean of current action to true
 @param String of current action
 */
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

/*
 Adds Animal to the animals vector
 @param a Animal to add
*/
void Zookeeper::addAnimal(Animal* a){
    animals.push_back(a);
}

/*
    Loops through animals vector and calls setAsleep to wake up animals
*/
void Zookeeper::wake(){
    /*Observer Pattern applied here*/
    setActivities("wake");
    zookeeperChange();
    for(auto a: animals){
        std::cout << a->setAsleep(false) + "\n";
    }
}

/*
 Loops through animals vector and calls performNise to roll call animals
 */
void Zookeeper::rollCall(){
    /*Observer Pattern applied here*/
    setActivities("noise");
    zookeeperChange();
    for(auto a: animals){
        std::cout << a->performNoise() + "\n";
    }
}

/*
 Loops through animals vector and calls eat feed animals
 */
void Zookeeper::feed(){
    /*Observer Pattern applied here*/
    setActivities("feed");
    zookeeperChange();
    for(auto a: animals){
        std::cout << a->eat() + "\n";
    }
}

/*
 Loops through animals vector and calls roam to let animals roam
 */
void Zookeeper::letRoam(){
    /*Observer Pattern applied here*/
    setActivities("roam");
    zookeeperChange();
    for(auto a: animals){
        std::cout << a->roam() + "\n";
    }
}

/*
 Loops through animals vector and calls setAsleep to put animals to sleep
 */
void Zookeeper::closeZoo(){
    /*Observer Pattern applied here*/
    setActivities("sleep");
    zookeeperChange();
    for(auto a: animals){
        std::cout << a->setAsleep(true) + "\n";
    }
}
/*
 Observer Pattern applied here
 Adds an observer to observer vector
 @param o Observer to add
 */
void Zookeeper::registerObserver(Observer *o){
    observers.push_back(o);
}
/*
 Observer Pattern applied here
 Removes an observer from observers vector
 @param o Observer to remove
 */
void Zookeeper::removeObserver(Observer *o){
    observers.clear();
    delete(o);
}
/*
 Observer Pattern applied here
 Updates observers of current action
 */
void Zookeeper::notifyObserver(){
    for (int i = 0; i < observers.size(); i++) {
        Observer* obs = observers[i];
        obs->update(wakeAnnounce, roamAnnounce, feedAnnounce, noiseAnnounce, sleepAnnounce);
    }
}
/*
 Observer Pattern applied here
 Calls notifyObserver
 */
void Zookeeper::zookeeperChange(){
    notifyObserver();
}
