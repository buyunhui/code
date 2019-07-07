#ifndef _CONCRETECOMP1_H_
#define _CONCRETECOMP1_H_
#include "component.h"

class Concretecomp1: public Component{
    public:
    Concretecomp1(){};
    virtual ~Concretecomp1(){};
    
    public:
    virtual void showFunction();
 
};
#endif