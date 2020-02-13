//
// Created by sbing on 2/11/2020.
//

#ifndef PizzaFactory_h
#define PizzaFactory_h


#include <vector>
#include "Pizza.h"
#include "Onion.h"
#include "Pepperoni.h"
#include "Mushroom.h"
#include "GreenChili.h"
#include "AlfredoSauce.h"
#include "TomatoSauce.h"
#include "PestoSauce.h"
#include "GreenChili.h"
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
    
    enum ToppingType {
        Onion,
        Mushroom,
        GreenChili,
        TomatoSauce,
        PestoSauce,
        Pepperoni,
        AlfredoSauce
    } toppingType;
        

    static Pizza* createPizza(PizzaType pizzaType ) {
        
        // handle decoration (toppings)
        //for (auto & topping : std::vector<std::string>()) {
        //    toppings->addTopping();
        //}
        
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
    
    static Pizza* addToppings(Pizza* tempPizza, std::vector<ToppingType> toppings) {
        
        // driving function
        for(std::vector<ToppingType>::iterator it = toppings.begin(); it != toppings.end(); ++it) {
                    Pizza* tempPizza = addTopping(tempPizza, *it);
                }
        
        return tempPizza;
        
    }
    
    static Pizza* addTopping(Pizza* tempPizza, ToppingType toppingType) {
        switch(toppingType) {
            case Onion:
                return new class Onion(tempPizza);
            case Pepperoni:
                return new class Pepperoni(tempPizza);
            case AlfredoSauce:
                return new class AlfredoSauce(tempPizza);
            case Mushroom:
                return new class Mushroom(tempPizza);
            case GreenChili:
                return new class GreenChili(tempPizza);
            case TomatoSauce:
                return new class TomatoSauce(tempPizza);
            case PestoSauce:
                return new class PestoSauce(tempPizza);
            
            
        }
        throw "Invalid Topping type.";
    }
};

#endif /* PizzaFactory_h */


