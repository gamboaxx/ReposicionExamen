#include "Product.h"

Product::Product(std::string n) : productName(n) {}

std::string Product::getName() const {
    return productName;
}
