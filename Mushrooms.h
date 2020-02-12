#ifndef Mushrooms_h
#define Mushrooms_h

#include "ToppingDecorator.h"

class Mushrooms : public ToppingDecorator {
public:
    Mushrooms(Pizza* pizza):ToppingDecorator(pizza){};
    float getPrice() { return 1.5 + tempPizza->getPrice(); };
    std::string getDescription() {
        return tempPizza->getDescription() + ", Mushrooms";
    };
    ~Mushrooms() {};
 };
#endif /* Mushrooms h */

