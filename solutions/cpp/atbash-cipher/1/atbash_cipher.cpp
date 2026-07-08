#include "atbash_cipher.h"

namespace atbash_cipher {
    std::string cleanText(std::string text){
        std::string clean_text{};
        for (char c : text){
            if (c >= 'A' && c <= 'Z') {clean_text += (c + 32);}
            else if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')){
                clean_text +=c;
            }
        }
        return clean_text;
    }

    char transpose(char c){
        if (c >= 'a' && c <= 'z') {return 'z' - (c - 'a');}
        return c;
    }
    
    std::string encode(std::string txt){
        txt=cleanText(txt);
        std::string gcg{};
        int i{0};
        for (char c :txt){
            if (i==5){
                gcg += " ";
                i=0;
            }
            gcg += transpose(c);
            i++;
        }
        return gcg;
    }
    
    std::string decode(std::string gcg){
        gcg=cleanText(gcg);
        std::string txt{};
        for (char c :gcg){
            txt += transpose(c);
        }
        return txt;
    }

}  // namespace atbash_cipher
