#include "../headers/factory/factory.h"

int main()
{
    Product *p = Factory::creatProduct(1);
    p->describe();
    p->use();
    return 0;
}