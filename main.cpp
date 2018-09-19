#include <iostream>
#include "header.hpp"

int main() {
    auto *s = GetS();

    std::cout << "isS? " << isS(s) << std::endl;
}