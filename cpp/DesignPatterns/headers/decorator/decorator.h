#ifndef _DECORATOR_H_
#define _DECORATOR_H_
#include "component.h"

class Decorator: public Component{
    public:
    Decorator(Component *impComp):m_impComp(impComp){};
    virtual ~Decorator(){delete m_impComp; m_impComp=0;};
    public:
    virtual void showFunction(){
        m_impComp->showFunction();
    };
    private:
    Component *m_impComp;
};
#endif