#ifndef _CONCRETECOMP2_H_
#define _CONCRETECOMP2_H_
#include "component.h"

class Concretecomp2: public Component{
    public:
    Concretecomp2(){};
    virtual ~Concretecomp2(){};
    
    public:
    virtual void showFunction();
 
};
#endif