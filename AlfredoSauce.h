//
//  AlfredoSauce.h
//  SB_Factory51
//
//  Created by Scott Bing on 2/12/20.
//  Copyright © 2020 Scott Bing. All rights reserved.
//

#ifndef AlfredoSauce_h
#define AlfredoSauce_h

#include "SauceDecorator.h"

class AlfredoSauce : public SauceDecorator {
public:
    AlfredoSauce(Pizza* pizza):SauceDecorator(pizza){};
    float getPrice() { return 1.5 + tempPizza->getPrice(); };
    std::string getDescription() {
        return tempPizza->getDescription() + ", AlfredoSauce";
    };
    ~AlfredoSauce() {};
 };

#endif /* AlfredoSauce_h */
