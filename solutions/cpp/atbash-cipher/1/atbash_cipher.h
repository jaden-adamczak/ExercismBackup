#pragma once
#include<string>
namespace atbash_cipher {
char transpose(char c);
std::string cleanText(std::string text);
std::string encode(std::string txt);
std::string decode(std::string gcg);
}  // namespace atbash_cipher
