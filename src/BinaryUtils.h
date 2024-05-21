#ifndef BINARYUTILS_H
#define BINARYUTILS_H

#include <vector>
#include <string>

class BinaryUtils {
public:
    static std::vector<int> toBinary(int num, int size);
    static int binaryToDecimal(const std::vector<int>& binary);
    static std::string toBinaryString(int value, int bits);
};

#endif // BINARYUTILS_H
