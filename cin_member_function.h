#ifndef CIN_MEMBER_FUNCTION_H
#define CIN_MEMBER_FUNCTION_H

#include <iostream>
#include <cstring>


namespace StdCinGetLineMemberFunction {
    int main() {
        char line[300];

        std::cout << "Enter your username: ";
        std::cin.getline(line, 300);

        std::cout << "Hi " << line << std::endl;
        std::cout << "How old are you : " << line << "? " << std::endl;

        int age;
        std::cin >> age;
        if (age > 18)
            std::cout << "Great so you are +18" << std::endl;
        else if (age < 18)
            std::cout << "Hum, still young ... " << std::endl;
        else
            std::cout << "You have 18!!! You are becoming old ... " << std::endl;

        getc(stdin);
        return 0;
    }
}
#endif //CIN_MEMBER_FUNCTION_H
