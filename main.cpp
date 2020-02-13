#include <iostream>
#include "PizzaFactory.h"
#include "Mushroom.h"


int main(int argc, const char * argv[]) {
    
    // specify toppings
    std::vector<std::string> toppings;
    toppings.push_back("Mushroom");
    toppings.push_back("Onion");
    
    Pizza* newPizza =  PizzaFactory::createPizza(PizzaFactory::ThinCrust,toppings);
    std::cout << newPizza->getDescription() << std::endl;
    delete newPizza;
    
    
    
    return 0;
}
