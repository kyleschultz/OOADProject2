#ifndef DisplayElement_hpp
#define DisplayElement_hpp

#include <stdio.h>
#include <string>
/*
 Observer Pattern applied here
 Abstract class fot announce function
 */
class DisplayElement {
public:
    virtual void announce(std::string condition) = 0;
};

#endif /* DisplayElement_hpp */
