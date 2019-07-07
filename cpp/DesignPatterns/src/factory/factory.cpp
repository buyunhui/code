#include "../../headers/factory/factory.h"
#include "../../headers/factory/productA.h"
#include "../../headers/factory/productB.h"


Factory::Factory() {

};

Factory::~Factory() {

};

Product* Factory::creatProduct(int type) {
    if  (type == 0 ) {
        return new ProductA();
    }
    
    return new ProductB(); 
}




