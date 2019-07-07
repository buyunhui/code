#include "../../headers/factory/productB.h"

#include <iostream>

ProductB::ProductB() {

}

ProductB::~ProductB(){

}

void ProductB::use() {
    std::cout << "cityB"<<std::endl;
}

void ProductB::describe() {
    std::cout << "ProductB"<< std::endl;
}
