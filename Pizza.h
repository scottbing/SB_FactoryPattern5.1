//
// Created by sbing on 2/11/2020.
//
#ifndef Pizza_h
#define Pizza_h

#include <iostream>

class Pizza {
public:
    virtual float getPrice() = 0;
    virtual std::string getDescription() = 0;
    virtual ~Pizza(){}; //Destructor
};

#endif /* Pizza_h */
