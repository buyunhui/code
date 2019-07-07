#ifndef _PRODUCTB_H
#define _PRODUCTB_H

#include "product.h"

class ProductB: public Product{
public:
    ProductB();
    virtual ~ProductB();

    virtual void use();
    virtual void describe();

};

#endif // !_PRODUCTA_H