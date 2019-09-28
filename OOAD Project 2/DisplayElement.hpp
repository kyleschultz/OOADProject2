//
//  DisplayElement.hpp
//  OOAD Project 2
//
//  Created by Kyle Schultz on 9/28/19.
//  Copyright © 2019 Kyle Schultz. All rights reserved.
//

#ifndef DisplayElement_hpp
#define DisplayElement_hpp

#include <stdio.h>
#include <string>

class DisplayElement {
public:
    virtual void announce(std::string condition) = 0;
};

#endif /* DisplayElement_hpp */
