#ifndef Observer_hpp
#define Observer_hpp
#include <stdio.h>
/*
 Observer Pattern applied here
 Abstract class with pure virtual functions
 */
class Observer{
public:
    virtual void update(bool wakeAnnounce, bool roamAnnounce, bool feedAnnounce, bool noiseAnnounce, bool sleepAnnounce) = 0;
};

#endif /* Observer_hpp */
