//
// Created by Shuai Yuan on 28/02/2026.
//

#ifndef HEXSTRING_BASE16_H
#define HEXSTRING_BASE16_H

#include <vector>
#include <string>

/**
 * Encodes a binary data buffer into a Base16 (hexadecimal) string representation.
 *
 * Base16, also known as hexadecimal encoding, converts each byte of binary data into
 * two hexadecimal characters. This function translates the input data into its
 * corresponding Base16 encoded string format.
 *
 * @param data The binary data to be encoded, represented as a vector of unsigned char.
 * @return A string containing the Base16 encoded representation of the input data, return empty string if the input vector is invalid or encoding fails.
 */
std::string Base16Encode(const std::vector<unsigned char> &data);

/**
 * Decodes a Base16 (hexadecimal) encoded string into its binary data representation.
 *
 * Base16 decoding converts each pair of hexadecimal characters in the input string
 * back into a single byte of binary data. This function interprets the input string
 * as a sequence of hexadecimal values and produces the corresponding binary data.
 *
 * @param str The Base16 encoded string to be decoded.
 * @return A vector of unsigned char containing the decoded binary data. Returns an
 *         empty vector if the input string is invalid or decoding fails.
 */
std::vector<unsigned char> Base16Decode(const std::string &str);
#endif //HEXSTRING_BASE16_H
