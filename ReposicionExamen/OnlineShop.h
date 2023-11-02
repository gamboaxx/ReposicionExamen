#pragma once

#include <vector>
#include "Product.h"
#include "Customer.h"

class OnlineShop {
private:
    std::vector<Customer*> customers;
    std::vector<Product*> products;

public:
    void addProduct(Product* product);
    void registerCustomer(Customer* customer);
};
