
#ifndef IFSTREAM_LINE_BY_LINE_H
#define IFSTREAM_LINE_BY_LINE_H

#include <fstream>
#include <iostream>

namespace ReadTextFileIfStreamLineByLine {
    int main() {

        std::ifstream inputFile;
        inputFile.open(std::string("D:/temp/text_file.txt"));
        // Or one line
        // std::ifstream inputFile(std::string("D:/temp/text_file.txt"));

        if (inputFile.is_open()) {
            std::string line;
            while (getline(inputFile, line)) {
                std::cout << line << std::endl;
            }
            inputFile.close();
        } else {
            std::cout << "Could not open the file" << std::endl;
        }
        return 0;

    }
}
#endif //IFSTREAM_LINE_BY_LINE_H
