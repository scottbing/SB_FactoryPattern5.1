//
// Created by sbing on 2/11/2020.
//

#ifndef ThinCrustPizza_h
#define ThinCrustPizza_h

#include "Pizza.h"
class ThinCrustPizza : public Pizza {
public:
    virtual float getPrice() { return 8.5; };
    virtual std::string getDescription() { return "Thin Crust"; };
    virtual ~ThinCrustPizza(){};
};
#endif /* ThinCrustPizza_h */


