#include <iostream>
#include <string>
#include <vector>

#include "base16.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::string testStr{"测试base16数据"};

    std::vector<unsigned char> data(testStr.begin(), testStr.end() + 1);

    std::cout << "src: " << testStr << std::endl;

    const auto base16str = Base16Encode(data);
    std::cout << "Base16Encode: " << base16str << std::endl;

    const auto resdata = Base16Decode(base16str);
    std::cout << "Base16Decode: " << resdata.data() << std::endl;
    return 0;
}
