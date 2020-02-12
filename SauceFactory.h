//
//  SauceFactory.h
//  SB_Factory51
//
//  Created by Scott Bing on 2/12/20.
//  Copyright © 2020 Scott Bing. All rights reserved.
//

#ifndef SauceFactory_h
#define SauceFactory_h

#include <stdio.h>
#include "Pizza.h"
#include "ThickCrustSauce.h"
#include "ThinCrustSauce.h"
#include "StuffedCrustSauce.h"

class SauceFactory {
public:
    enum SauceType {
        PestoSauce,
        TomatoSauce,
        AlfredoSauce
    };

    static Sauce* createSauce(SauceType sauceType) {
        switch(sauceType) {
            case PestoSauce:
                return new PestoSauce();
            case TomatoSauce:
                return new TomatoSauce();
            case AlfredoSauce:
                return new AlfredoSauce();
        }
        throw "Invalid Sauce type.";
    }
};
#endif /* SauceFactory_h */
