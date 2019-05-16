
#ifndef IFSTREAM_UNTIL_EOF_H
#define IFSTREAM_UNTIL_EOF_H

#include <fstream>
#include <iostream>

namespace ReadTextFileUntilEof {

    int main() {
        std::ifstream inputFile("D:/temp/text_file.txt");
        if (inputFile.is_open()) {
            char ch;
            while (!inputFile.eof()) {
                inputFile.get(ch);
                std::cout << ch;
            }
            inputFile.close();
        } else {
            std::cout << "Could not open the file" << std::endl;
        }
        return 0;
    }
}
#endif //IFSTREAM_UNTIL_EOF_H
