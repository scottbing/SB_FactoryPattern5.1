//
//  GreenChili.h
//  SB_Factory51
//
//  Created by Scott Bing on 2/12/20.
//  Copyright © 2020 Scott Bing. All rights reserved.
//

#ifndef GreenChili_h
#define GreenChili_h

#include "ToppingDecorator.h"

class GreenChili : public ToppingDecorator {
public:
    GreenChili(Pizza* pizza):ToppingDecorator(pizza){};
    float getPrice() { return 1.5 + tempPizza->getPrice(); };
    std::string getDescription() {
        return tempPizza->getDescription() + ", GreenChili";
    };
    ~GreenChili() {};
 };
#endif /* GreenChili h */
 
