//
//  TomatoSauce.h
//  SB_Factory51
//
//  Created by Scott Bing on 2/12/20.
//  Copyright © 2020 Scott Bing. All rights reserved.
//

#ifndef TomatoSauce_h
#define TomatoSauce_h

#include "SauceDecorator.h"

class TomatoSauce : public SauceDecorator {
public:
    TomatoSauce(Pizza* pizza):SauceDecorator(pizza){};
    float getPrice() { return 1.5 + tempPizza->getPrice(); };
    std::string getDescription() {
        return tempPizza->getDescription() + ", TomatoSauce";
    };
    ~TomatoSauce() {};
 };

#endif /* TomatoSauce h */

