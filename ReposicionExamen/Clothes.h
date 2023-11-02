#pragma once

#include "Product.h"

class Clothes : public Product {
private:
    std::string clothesSize;

public:
    Clothes(std::string n, std::string s);

    std::string getSize() const;
};
