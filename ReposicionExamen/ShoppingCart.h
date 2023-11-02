#pragma once

#include <vector>
#include "Product.h"

class ShoppingCart {
private:
    std::vector<Product*> cartItems;

public:
    void addProduct(Product* product);
    void removeProduct(Product* product);
};
