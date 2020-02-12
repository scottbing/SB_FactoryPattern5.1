//
// Created by sbing on 2/11/2020.
//

#ifndef ThickCrustPizza_h
#define ThickCrustPizza_h

#include "Pizza.h"
class ThickCrustPizza : public Pizza {
public:
    virtual float getPrice() { return 9.5; };
    virtual std::string getDescription() { return "Thick Crust"; };
    virtual ~ThickCrustPizza(){};
};
#endif /* ThickCrustPizza_h */
