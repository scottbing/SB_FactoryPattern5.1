//
//  PestoSauce.h
//  SB_Factory51
//
//  Created by Scott Bing on 2/12/20.
//  Copyright © 2020 Scott Bing. All rights reserved.
//

#ifndef PestoSauce_h
#define PestoSauce_h

#include "SauceDecorator.h"

class PestoSauce : public SauceDecorator {
public:
    PestoSauce(Pizza* pizza):SauceDecorator(pizza){};
    float getPrice() { return 1.5 + tempPizza->getPrice(); };
    std::string getDescription() {
        return tempPizza->getDescription() + ", PestoSauce";
    };
    ~PestoSauce() {};
 };

#endif /* PestoSauce h */
