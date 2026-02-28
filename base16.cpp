//
// Created by Shuai Yuan on 28/02/2026.
//

#include "base16.h"

static const std::string base16EncTable{"0123456789ABCDEF"};

static int HexValue(unsigned char c) {
    if (c >= '0' && c <= '9') return static_cast<int>(c - '0');
    c = static_cast<unsigned char>(std::toupper(c));
    if (c >= 'A' && c <= 'F') return static_cast<int>(10 + (c - 'A'));
    return -1;
}

std::string Base16Encode(const std::vector<unsigned char> &data) {
    if (data.empty()) return {};

    // 防止 size_t * 2 溢出（极端情况）
    if (data.size() > (std::numeric_limits<std::size_t>::max() / 2)) return {};

    std::string out;
    out.resize(data.size() * 2);

    std::size_t j = 0;
    for (const unsigned char b: data) {
        out[j++] = base16EncTable[(b >> 4) & 0x0F];
        out[j++] = base16EncTable[b & 0x0F];
    }
    return out;
}

std::vector<unsigned char> Base16Decode(const std::string &str) {
    if (str.empty()) return {};
    if ((str.size() & 1u) != 0u) return {}; // 必须是偶数长度

    std::vector<unsigned char> out;
    out.reserve(str.size() / 2);

    for (std::size_t i = 0; i < str.size(); i += 2) {
        const int hi = HexValue(static_cast<unsigned char>(str[i]));
        const int lo = HexValue(static_cast<unsigned char>(str[i + 1]));
        if (hi < 0 || lo < 0) return {}; // 非法字符
        out.push_back(static_cast<unsigned char>((hi << 4) | lo));
    }

    return out;
}
