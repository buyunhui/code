#ifndef _COMPONENT_H_
#define _COMPONENT_H_
#include <string>

class Component{
    public:
    Component(){};
    virtual ~Component(){}; 

    public:
    virtual void showFunction()=0;
}; 

#endif