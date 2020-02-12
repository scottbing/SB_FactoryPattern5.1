#include <iostream>
#include "PizzaFactory.h"
#include "Mushrooms.h"

//helper function to alleviate repeated code.
void pizzaInformation(PizzaFactory::PizzaType pizzaType) {
    Pizza* pizza = new Mushrooms(PizzaFactory::createPizza(pizzaType));
    std::cout << "Price of " << pizzaType << " is " << pizza->getPrice() << std::endl;
    std::cout << "Pizza includes " << pizza->getDescription() <<std::endl;
    delete pizza;
}

int main(int argc, const char * argv[]) {
    pizzaInformation(PizzaFactory::ThinCrust);
    pizzaInformation(PizzaFactory::ThickCrust);
    pizzaInformation(PizzaFactory::StuffedCrust);

    return 0;
}
