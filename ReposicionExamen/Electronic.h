#pragma once

#include "Product.h"

class Electronic : public Product {
private:
    std::string electronicBrand;

public:
    Electronic(std::string n, std::string b);

    std::string getBrand() const;
};
