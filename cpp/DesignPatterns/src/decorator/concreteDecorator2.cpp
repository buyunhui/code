#include <iostream>
#include "../../headers/decorator/concreteDecorator2.h"

void ConcreteDecorator2::showFunction(){
    std::cout<<"ConcreteDecorator2:===="<<std::endl;
    Decorator::showFunction ();
}
 