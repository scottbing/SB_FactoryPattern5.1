//
// Created by sbing on 2/11/2020.
//

#ifndef PizzaFactory_h
#define PizzaFactory_h

#include "Pizza.h"
#include "ThickCrustPizza.h"
#include "ThinCrustPizza.h"
#include "StuffedCrustPizza.h"

class PizzaFactory {
public:
    enum PizzaType {
        ThinCrust,
        ThickCrust,
        StuffedCrust
    };

    static Pizza* createPizza(PizzaType pizzaType) {
        switch(pizzaType) {
            case ThinCrust:
                return new ThinCrustPizza();
            case ThickCrust:
                return new ThickCrustPizza();
            case StuffedCrust:
                return new StuffedCrustPizza();
        }
        throw "Invalid Pizza type.";
    }
};
#endif /* PizzaFactory_h */

