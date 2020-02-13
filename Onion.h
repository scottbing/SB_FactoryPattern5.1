//
//  Onion.h
//  SB_Factory51
//
//  Created by Scott Bing on 2/12/20.
//  Copyright © 2020 Scott Bing. All rights reserved.
//

#ifndef Onion_h
#define Onion_h

#include "ToppingDecorator.h"

class Onion : public ToppingDecorator {
public:
    Onion(Pizza* pizza):ToppingDecorator(pizza){};
    float getPrice() { return 1.5 + tempPizza->getPrice(); };
    std::string getDescription() {
        return tempPizza->getDescription() + ", Onion";
    };
    ~Onion() {};
 };
#endif /* Onion h */
