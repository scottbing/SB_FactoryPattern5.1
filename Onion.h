//
//  Onion.h
//  SB_Factory51
//
//  Created by Scott Bing on 2/12/20.
//  Copyright © 2020 Scott Bing. All rights reserved.
//

#ifndef OnionDecorator_h
#define OnionDecorator_h

#include "Pizza.h"

class OnionDecorator : public Pizza {
public:
    Pizza* tempPizza = 0;

    OnionDecorator(Pizza* pizza) { tempPizza = pizza; };
    virtual float getPrice() = 0;
    virtual std::string getDescription() = 0;
    ~OnionDecorator() {};
 };\

 #endif /* OnionDecorator_h */
