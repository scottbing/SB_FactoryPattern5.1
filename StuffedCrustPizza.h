//
// Created by sbing on 2/11/2020.
//

#ifndef StuffedCrustPizza_h
#define StuffedCrustPizza_h

#include "Pizza.h"
class StuffedCrustPizza : public Pizza {
public:
    virtual float getPrice() { return 8.5; };
    virtual std::string getDescription() { return "Stuffed Crust"; };
    virtual ~StuffedCrustPizza(){};
};
#endif /* StuffedCrustPizza_h */
