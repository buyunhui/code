#ifndef _PRODUCT_H
#define _PRODUCT_H

class Product {

public:
    Product();
    virtual ~Product ();
    
    virtual void use()=0;
    virtual void describe()=0;
};

#endif // !_PRODUCT_H
