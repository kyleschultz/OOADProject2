//
//  Observer.hpp
//  OOAD Project 2
//
//  Created by Kyle Schultz on 9/28/19.
//  Copyright © 2019 Kyle Schultz. All rights reserved.
//

#ifndef Observer_hpp
#define Observer_hpp
#include <stdio.h>

class Observer{
public:
    virtual void update(bool wakeAnnounce, bool roamAnnounce, bool feedAnnounce, bool noiseAnnounce, bool sleepAnnounce) = 0;
};

#endif /* Observer_hpp */
