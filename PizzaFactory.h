//
// Created by sbing on 2/11/2020.
//

#ifndef PizzaFactory_h
#define PizzaFactory_h

#include <vector>
#include "Pizza.h"
#include "ThickCrustPizza.h"
#include "ThinCrustPizza.h"
#include "StuffedCrustPizza.h"
#include "ToppingDecorator.h"

class PizzaFactory {
public:
    
    enum PizzaType {
        ThinCrust,
        ThickCrust,
        StuffedCrust
    } pizzaType;
        
    std::vector<ToppingDecorator> toppings;
    
    // class prototype
    PizzaFactory (PizzaType pt,std::vector<ToppingDecorator> tp) : pizzaType(pt), toppings(tp) {}


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


