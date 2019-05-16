
#ifndef ISTRSTREAM_BINARY_DATA_H
#define ISTRSTREAM_BINARY_DATA_H

#include <sstream>
#include <iostream>

namespace StringStreamReadWriteBinaryDataBasic {
    int main() {
        // When dealing with binary data we have to use
        // read and write methods
        std::stringstream stream;

        std::uint64_t firstNumber = 1234567890;
        const char *helloMessage = "Hello World written in binary";
        size_t helloMessageLen = strlen(helloMessage);

        // Write(serialize) the uint64_t)
        stream.write((char const *) &firstNumber,
                     sizeof(firstNumber));

        // serializie the C string
        stream.write(helloMessage, helloMessageLen + 1);

        std::uint64_t firstNumberCopy;
        char *helloMessageCopy = new char[helloMessageLen + 1];
        // recover the number
        stream.read((char *) &firstNumberCopy, sizeof(firstNumberCopy));
        // recover the string
        stream.read(helloMessageCopy, helloMessageLen + 1);

        // Not needed because before we also wrote the 0x00 byte which we recovered
        helloMessageCopy[helloMessageLen] = 0x00;


        // Print the copies, should match
        std::cout << "Recovered" << std::endl;
        std::cout << firstNumberCopy << std::endl;
        std::cout << helloMessageCopy << std::endl;
    }
}
#endif //ISTRSTREAM_BINARY_DATA_H
