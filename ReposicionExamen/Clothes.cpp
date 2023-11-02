#include "Clothes.h"

Clothes::Clothes(std::string n, std::string s) : Product(n), clothesSize(s) {}

std::string Clothes::getSize() const {
    return clothesSize;
}
