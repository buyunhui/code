#ifndef _CONCRETEDECORATOR2_H_
#define _CONCRETEDECORATOR2_H_
#include "component.h"
#include "decorator.h"

class ConcreteDecorator2: public Decorator{
    public:
    ConcreteDecorator2(Component *impComp):Decorator(impComp){};
    virtual ~ConcreteDecorator2(){};
    public:
    virtual void showFunction();
   
};
#endif