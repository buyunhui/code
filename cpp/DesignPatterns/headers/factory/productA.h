#ifndef _PRODUCTA_H
#define _PRODUCTA_H

#include "product.h"

class ProductA: public Product{
public:
    ProductA();
    virtual ~ProductA();

    virtual void use();
    virtual void describe();

};

#endif // !_PRODUCTA_H
