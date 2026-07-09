#include "bob.h"
namespace bob {
std::string hey(std::string text) {
    int last = text.length() - 1;
    while (last >= 0 && isspace(text[last])) {
        last--;}
    if (last < 0) {return "Fine. Be that way!";}
    bool is_question = (text[last] == '?');
    bool has_letters = false;
    bool has_lowercase = false;
    for (int i = 0; i <= last; i++) {
        if (std::isalpha(text[i])) {
            has_letters = true;
            if (std::islower(text[i])) {
                has_lowercase = true;
                break;
            }
        }
    }
    bool is_yelling = has_letters && !has_lowercase;
    if (is_yelling && is_question) {return "Calm down, I know what I'm doing!";}
    if (is_yelling) {return "Whoa, chill out!";}
    if (is_question) {return "Sure.";}   
    return "Whatever.";
}
}  // namespace bob