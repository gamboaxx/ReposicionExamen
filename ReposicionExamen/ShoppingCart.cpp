#include "ShoppingCart.h"

void ShoppingCart::addProduct(Product* product) {
    cartItems.push_back(product);
}

void ShoppingCart::removeProduct(Product* product) {
    cartItems.erase(std::remove(cartItems.begin(), cartItems.end(), product), cartItems.end());
}
