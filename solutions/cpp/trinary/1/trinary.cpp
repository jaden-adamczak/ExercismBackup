#include "trinary.h"

namespace trinary {
int to_decimal(std::string ter){
    int N = ter.length(); // '10' => len is 2, exp in pow is 1 then 0
    int num{0};
    for (int i = 0; i < N; ++i) {
        char c = ter[i];
        int ic = c - '0'; // convert to digit
        if (isdigit(c)){num += ic*pow(3,N-(i+1));}
    }
    return num;
}
}  // namespace trinary
