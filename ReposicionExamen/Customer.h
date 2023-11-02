#pragma once

#include <string>
#include <vector>
#include "Product.h"

class Customer {
private:
    std::string customerName;
    std::vector<Product*> productsPurchased;

public:
    Customer(std::string n);

    void purchase(Product* product);

    std::string getName() const;
    std::vector<Product*> getProductsPurchased() const;
};
