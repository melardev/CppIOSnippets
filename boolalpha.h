
#ifndef BOOLALPHA_H
#define BOOLALPHA_H

#include <iostream>

namespace BoolAlphaUsage {
    int main() {
        std::cout << "After std::boolalpha" << std::endl;
        std::cout << true << std::endl;
        std::cout << false << std::endl << std::endl;

        std::cout << std::boolalpha; // Enable printing true and false
        std::cout << "After std::boolalpha" << std::endl;
        std::cout << true << std::endl;
        std::cout << false << std::endl << std::endl;

        // One liner
        // std::cout << std::boolalpha << true << false << std::endl;
    }
}

#endif //BOOLALPHA_H
