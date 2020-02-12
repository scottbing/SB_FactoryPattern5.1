//
// Created by sbing on 2/11/2020.
//

#ifndef ToppingDecorator_h
#define ToppingDecorator_h

#include "Pizza.h"

class ToppingDecorator : public Pizza {
public:
    Pizza* tempPizza = 0;

    ToppingDecorator(Pizza* pizza) { tempPizza = pizza; };
    virtual float getPrice() = 0;
    virtual std::string getDescription() = 0;
    ~ToppingDecorator() {};
 };
 #endif /* ToppingDecorator_h */

