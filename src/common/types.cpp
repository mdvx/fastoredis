#include "common/types.h"

#include "common/convert2string.h"

namespace common
{
    std::string escapedText(const std::string &str)
    {
        if(!str.empty() && str[str.length()-1] != '\n'){
            return str + "\n";
        }
        return str;
    }
}
