#include <iostream>
#include "../../headers/decorator/concreteDecorator1.h"

void ConcreteDecorator1::showFunction(){
    std::cout<<"ConcreteDecorator1:===="<<std::endl;
    Decorator::showFunction ();
}
 