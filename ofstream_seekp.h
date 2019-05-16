#ifndef OFSTREAM_SEEKP_H
#define OFSTREAM_SEEKP_H

#include <fstream>
#include <iostream>


namespace OFileStreamSeekp {
    void main() {

        // Open file for write(ios::out) -> output
        std::ofstream testFile("./out_test.txt", std::ios::out);
        if (testFile.is_open()) {
            // write Hello world
            testFile << "Hello\nworld";

            // move the cursor to the beginning of the file
            testFile.seekp(std::ios::beg);

            testFile << "Override";
            testFile.close();

            // Read from the file
            std::string line;
            std::ifstream inputFile("./out_test.txt");
            if (inputFile.is_open()) {
                while (getline(inputFile, line)) {
                    std::cout << line << std::endl;
                }
                inputFile.close();
            }

        } else {
            std::cout << "Could not open the file" << std::endl;
        }
    }
}
#endif //OFSTREAM_SEEKP_H
