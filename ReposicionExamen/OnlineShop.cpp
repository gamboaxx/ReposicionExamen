#include "OnlineShop.h"

void OnlineShop::addProduct(Product* product) {
    products.push_back(product);
}

void OnlineShop::registerCustomer(Customer* customer) {
    customers.push_back(customer);
}
