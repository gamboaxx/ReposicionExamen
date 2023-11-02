#include <iostream>
#include "Product.h"
#include "Clothes.h"
#include "Electronic.h"
#include "Customer.h"
#include "OnlineShop.h"
#include "ShoppingCart.h"

int main() {
    Clothes* shirt = new Clothes("Shirt", "Medium");
    Electronic* iPad = new Electronic("iPad", "Apple");

    std::cout << "Product: " << shirt->getName() << ", Size: " << shirt->getSize() << std::endl;
    std::cout << "Product: " << iPad->getName() << ", Brand: " << iPad->getBrand() << std::endl;

    Customer* customerJohn = new Customer("John Doe");
    customerJohn->purchase(shirt);
    customerJohn->purchase(iPad);

    std::cout << "\nProducts purchased by " << customerJohn->getName() << ":" << std::endl;
    for (auto product : customerJohn->getProductsPurchased()) {
        std::cout << "- " << product->getName() << std::endl;
    }

    OnlineShop myShop;
    myShop.registerCustomer(customerJohn);
    myShop.addProduct(shirt);
    myShop.addProduct(iPad);

    ShoppingCart* cart = new ShoppingCart();
    cart->addProduct(shirt);
    cart->addProduct(iPad);

    delete shirt;
    delete iPad;
    delete customerJohn;
    delete cart;

    return 0;
}
