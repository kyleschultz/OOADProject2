#ifndef Subject_hpp
#define Subject_hpp

#include <stdio.h>
#include "Observer.hpp"
/*
 Observer Pattern applied here
 Abstract class with pure virtual functions
 */
class Subject{
public:
    virtual void registerObserver(Observer* o) = 0;
    virtual void removeObserver(Observer* o) = 0;
    virtual void notifyObserver() = 0;
};

#endif /* Subject_hpp */
