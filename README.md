# HexString (Base16 编解码工具)

[中文版] | [English Version](README_EN.md)

这是一个轻量级的 C++ 工具库，用于实现数据的 Base16（十六进制）编码与解码。

## 功能特点

- **Base16 编码**：将二进制数据（`std::vector<unsigned char>`）转换为十六进制字符串。
- **Base16 解码**：将十六进制字符串转换回原始二进制数据。
- **错误检查**：支持非法字符检测和奇数长度字符串检测。
- **简单易用**：接口简洁，仅需包含 `base16.h` 即可使用。

## 核心接口

项目主要提供以下两个函数（位于 `base16.h`）：

```cpp
// 将二进制数据编码为十六进制字符串
std::string Base16Encode(const std::vector<unsigned char> &data);

// 将十六进制字符串解码为二进制数据
std::vector<unsigned char> Base16Decode(const std::string &str);
```

## 快速开始

### 示例代码

你可以参考 `main.cpp` 中的使用示例：

```cpp
#include <iostream>
#include <string>
#include <vector>
#include "base16.h"

int main() {
    std::string testStr{"Hello Base16"};
    std::vector<unsigned char> data(testStr.begin(), testStr.end());

    // 编码
    std::string encoded = Base16Encode(data);
    std::cout << "Encoded: " << encoded << std::endl;

    // 解码
    std::vector<unsigned char> decoded = Base16Decode(encoded);
    std::cout << "Decoded: " << std::string(decoded.begin(), decoded.end()) << std::endl;

    return 0;
}
```

## 构建说明

项目使用 CMake 进行构建。

### 环境要求
- C++11 或更高版本的编译器
- CMake 3.10+

### 编译步骤
```bash
mkdir build
cd build
cmake ..
make
```

编译完成后，运行生成的可执行文件：
```bash
./HexString
```

## 许可说明
该项目仅供学习和参考使用。
