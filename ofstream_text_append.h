#ifndef OFSTREAM_TEXT_APPEND_H
#define OFSTREAM_TEXT_APPEND_H

#include <fstream>
#include <iostream>


namespace OutputTextFileStreamAppend {
    void main() {
        // please run ofstream_text_basic.h:WriteTextFileBasic::main() to create the output.txt
        // ios::app what it does is set the cursor at the end of the file stream each time
        // we perform a write operation
        // there is also ios::ate which I show in other snippet
        std::ofstream outputFileStream("./output.txt", std::ios::app);
        if (outputFileStream.is_open()) {
            outputFileStream << "Bam!, How about that?, a new line !\n";
            outputFileStream.close();

            std::cout << "File opened and APPENEDED a string into it successfully" << std::endl;
        } else {
            std::cout << "Could not open the file for writing" << std::endl;
        }
    }
}
#endif //OFSTREAM_TEXT_APPEND_H
