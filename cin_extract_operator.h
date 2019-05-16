#ifndef CIN_EXTRACT_OPERATOR_H
#define CIN_EXTRACT_OPERATOR_H

#include <iostream>

namespace StdCinExtractOperator {
    int main() {
        std::string username;
        int firstNumber, secondNumber;

        /* For single input */
        std::cout << "Your name please: ";
        std::cin >> username;

        std::cout << "Hi " << username << std::endl;
        std::cout << "I make additions, enter the two numbers(first one, press enter, second, press enter): "
                  << std::endl;
        std::cin >> firstNumber >> secondNumber;

        std::cout << "Addition = " << (firstNumber + secondNumber) << std::endl;
        std::cout << "Enter something to exit" << std::endl;
        getc(stdin);
        return 0;
    }
}
#endif //CIN_EXTRACT_OPERATOR_H
