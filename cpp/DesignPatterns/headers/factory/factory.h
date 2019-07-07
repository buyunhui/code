#ifndef _FACTORY_H_
#define _FACTORY_H_
#include "product.h"

class Factory{
    public: 
    Factory();
    virtual ~Factory();

    static Product* creatProduct(int type);
    
};


#endif // !_FACTORY_H_
