#pragma once

#include <string>

class Product {
private:
    std::string productName;

public:
    Product(std::string n);

    std::string getName() const;
};
