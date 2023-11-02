#include "Electronic.h"

Electronic::Electronic(std::string n, std::string b) : Product(n), electronicBrand(b) {}

std::string Electronic::getBrand() const {
    return electronicBrand;
}
