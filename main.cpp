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
    
    // specify toppings
    std::vector<PizzaFactory::ToppingType> toppings;
    toppings.push_back(PizzaFactory::TomatoSauce);
    toppings.push_back(PizzaFactory::Onion);
    
    
    Pizza* Pizza =  PizzaFactory::addToppings(PizzaFactory::createPizza(PizzaFactory::ThinCrust),toppings);
    std::cout << Pizza->getDescription() << std::endl;
    delete Pizza;
    
    // specify toppings
    toppings.clear();
    toppings.push_back(PizzaFactory::Onion);
    toppings.push_back(PizzaFactory::Onion);
    toppings.push_back(PizzaFactory::Mushroom);
    
    Pizza = PizzaFactory::addToppings(PizzaFactory::createPizza(PizzaFactory::StuffedCrust),toppings);
    std::cout << Pizza->getDescription() << std::endl;
    delete Pizza;
    
    // specify toppings
    toppings.clear();
    toppings.push_back(PizzaFactory::TomatoSauce);
    toppings.push_back(PizzaFactory::PestoSauce);
    toppings.push_back(PizzaFactory::AlfredoSauce);
    toppings.push_back(PizzaFactory::Mushroom);
    
    Pizza = PizzaFactory::addToppings(PizzaFactory::createPizza(PizzaFactory::ThickCrust),toppings);
    std::cout << Pizza->getDescription() << std::endl;
    delete Pizza;
    
    
    return 0;
}
