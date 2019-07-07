#ifndef _CONCRETEDECORATOR1_H_
#define _CONCRETEDECORATOR1_H_
#include "component.h"
#include "decorator.h"

class ConcreteDecorator1: public Decorator{
    public:
    ConcreteDecorator1(Component *impComp):Decorator(impComp){};
    virtual ~ConcreteDecorator1(){};
    public:
    virtual void showFunction();
   
};
#endif