#include <iostream>
#include "PizzaFactory.h"
#include "Mushroom.h"

enum ToppingType {
       Onion,
       Mushroom,
       GreenChili,
       TomatoSauce,
       PestoSauce,
       Pepperoni,
       AlfredoSauce
   } toppingType;


int main(int argc, const char * argv[]) {
    
    Pizza* newPizza =  PizzaFactory::createPizza(PizzaFactory::ThinCrust);
    std::cout << newPizza->getDescription() << std::endl;
    delete newPizza;
    
    // specify toppings
    std::vector<PizzaFactory::ToppingType> toppings;
    toppings.push_back(PizzaFactory::Mushroom);
    toppings.push_back(PizzaFactory::Onion);
    
    
    Pizza* Pizza =  PizzaFactory::addToppings(PizzaFactory::createPizza(PizzaFactory::ThinCrust),toppings);
    std::cout << Pizza->getDescription() << std::endl;
    delete Pizza;
    
    
    
    return 0;
}
