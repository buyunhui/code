#include "../headers/decorator/concretecomp2.h"
#include "../headers/decorator/concretecomp1.h"
#include "../headers/decorator/concreteDecorator1.h"
#include "../headers/decorator/concreteDecorator2.h"

int main()
{
    Concretecomp1 *p1 = new Concretecomp1();
    Concretecomp2 *p2 = new Concretecomp2();

    ConcreteDecorator1 *d1 = new ConcreteDecorator1(p1);
    ConcreteDecorator2 *d2 = new ConcreteDecorator2(d1);

    //d1->showFunction();
    d2->showFunction();
    return 0;
}
