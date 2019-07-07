#include "../../headers/factory/productA.h"

#include <iostream>

ProductA::ProductA() {

}

ProductA::~ProductA (){

}

void ProductA::use() {
    std::cout << "city"<<std::endl;
}

void ProductA::describe() {
    std::cout << "Product"<< std::endl;
}
