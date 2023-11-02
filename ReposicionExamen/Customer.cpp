#include "Customer.h"

Customer::Customer(std::string n) : customerName(n) {}

void Customer::purchase(Product* product) {
    productsPurchased.push_back(product);
}

std::string Customer::getName() const {
    return customerName;
}

std::vector<Product*> Customer::getProductsPurchased() const {
    return productsPurchased;
}
