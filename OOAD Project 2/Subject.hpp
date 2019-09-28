//
//  Subject.hpp
//  OOAD Project 2
//
//  Created by Kyle Schultz on 9/28/19.
//  Copyright © 2019 Kyle Schultz. All rights reserved.
//

#ifndef Subject_hpp
#define Subject_hpp

#include <stdio.h>
#include "Observer.hpp"
/*Observer Pattern applied here*/
class Subject{
public:
    virtual void registerObserver(Observer* o) = 0;
    virtual void removeObserver(Observer* o) = 0;
    virtual void notifyObserver() = 0;
};

#endif /* Subject_hpp */
