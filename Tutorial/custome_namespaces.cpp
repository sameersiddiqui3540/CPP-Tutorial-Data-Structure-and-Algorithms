//
// Created by samee on 18-09-2025.
//
#include <iostream>

namespace sameer {
    char x {'S'};
}

using namespace sameer;

int main() {
    char x {'T'};
    // std::cout << x << std::endl;
    std::cout << sameer::x;

    return 0;
}