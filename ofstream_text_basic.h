#ifndef OFSTREAM_TEXT_BASIC_H
#define OFSTREAM_TEXT_BASIC_H

#include <fstream>
#include <iostream>

namespace WriteTextFileBasic {
    int main() {
        std::ofstream outputFileStream("./output.txt");
        if (outputFileStream) {
            outputFileStream << "I really love writing to files"
                             << std::endl << "I don't have to, but I do, this is how I learn"
                             << std::endl << "Forgive me please." << std::endl;
            outputFileStream.close();

            std::cout << "File opened and wrote into it successfully" << std::endl;
        } else {
            std::cout << "Could not open the file for writing" << std::endl;
        }
        return 0;
    }
}
#endif //OFSTREAM_TEXT_BASIC_H
