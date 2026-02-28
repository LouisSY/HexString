# HexString (Base16 Encoding & Decoding Tool)

[English Version] | [中文版](README.md)

A lightweight C++ library for Base16 (hexadecimal) encoding and decoding.

## Features

- **Base16 Encoding**: Convert binary data (`std::vector<unsigned char>`) into a hexadecimal string.
- **Base16 Decoding**: Convert a hexadecimal string back into original binary data.
- **Error Checking**: Supports detection of invalid characters and odd-length strings.
- **Simple & Easy to Use**: Clean interface, just include `base16.h` to get started.

## Core Interfaces

The project provides two main functions (located in `base16.h`):

```cpp
// Encode binary data to a hexadecimal string
std::string Base16Encode(const std::vector<unsigned char> &data);

// Decode a hexadecimal string to binary data
std::vector<unsigned char> Base16Decode(const std::string &str);
```

## Quick Start

### Example Code

You can refer to the usage example in `main.cpp`:

```cpp
#include <iostream>
#include <string>
#include <vector>
#include "base16.h"

int main() {
    std::string testStr{"Hello Base16"};
    std::vector<unsigned char> data(testStr.begin(), testStr.end());

    // Encoding
    std::string encoded = Base16Encode(data);
    std::cout << "Encoded: " << encoded << std::endl;

    // Decoding
    std::vector<unsigned char> decoded = Base16Decode(encoded);
    std::cout << "Decoded: " << std::string(decoded.begin(), decoded.end()) << std::endl;

    return 0;
}
```

## Build Instructions

The project uses CMake for building.

### Prerequisites
- C++11 or higher compiler
- CMake 3.10+

### Compilation Steps
```bash
mkdir build
cd build
cmake ..
make
```

After compilation, run the generated executable:
```bash
./HexString
```

## License
This project is for learning and reference purposes only.
