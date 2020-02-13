//
//  Pepperoni.h
//  SB_Factory51
//
//  Created by Scott Bing on 2/12/20.
//  Copyright © 2020 Scott Bing. All rights reserved.
//

#ifndef Pepperoni_h
#define Pepperoni_h

#include "ToppingDecorator.h"

class Pepperoni : public ToppingDecorator {
public:
    Pepperoni(Pizza* pizza):ToppingDecorator(pizza){};
    float getPrice() { return 1.5 + tempPizza->getPrice(); };
    std::string getDescription() {
        return tempPizza->getDescription() + ", Pepperoni";
    };
    ~Pepperoni() {};
 };
#endif /* Pepperoni h */

