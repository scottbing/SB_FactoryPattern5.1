#ifndef Mushroom_h
#define Mushroom_h

#include "ToppingDecorator.h"

class Mushroom : public ToppingDecorator {
public:
    Mushroom(Pizza* pizza):ToppingDecorator(pizza){};
    float getPrice() { return 1.5 + tempPizza->getPrice(); };
    std::string getDescription() {
        return tempPizza->getDescription() + ", Mushroom";
    };
    ~Mushroom() {};
 };
#endif /* Mushroom h */

