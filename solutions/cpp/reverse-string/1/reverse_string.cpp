#include "reverse_string.h"

namespace reverse_string {

std::string reverse_string(std::string str){
    std::string rts{};
    while (!str.empty()){
        rts+=str.back();
        str.pop_back();
    }    
    return rts;
    }
}
