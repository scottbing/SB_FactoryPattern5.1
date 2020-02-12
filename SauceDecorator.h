#ifndef SauceDecorator_h
#define SauceDecorator_h

#include "Pizza.h"

class SauceDecorator : public Pizza {
public:
    Pizza* tempPizza = 0;

    SauceDecorator(Pizza* pizza) { tempPizza = pizza; };
    virtual float getPrice() = 0;
    virtual std::string getDescription() = 0;
    ~SauceDecorator() {};
 };\
 #endif /* SauceDecorator_h */

