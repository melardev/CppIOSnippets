#ifndef INPUT_OUTPUT_UNICODE_ASCII_H
#define INPUT_OUTPUT_UNICODE_ASCII_H

#include <iostream>

namespace InputOutputUnicodeVsAscii {
    int main() {
        // wcout used to output unicode
        // cout used for output ascii characters
        // cin used for ascii based input
        // wcin used for unicode input
        int age;
        std::wstring username;
        std::cout << "Hello world" << std::endl;
        std::cout << "Please your username: ";
        std::wcin >> username;
        std::wcout << "Ok, Hi " << username << " !" << std::endl;
        std::cout << "Now enter your age please" << std::endl;
        std::cin >> age;
        std::wcout << "Your name is " << username << " and you are " << age
                   << " years old" << std::endl
                   << "nice to meet you, bye!!";

        getc(stdin);
        return 0;
    }
}
#endif