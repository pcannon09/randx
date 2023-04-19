#include "include.hpp"
#include "uniformDist.hpp"
#include "randnum.hpp"

namespace randx
{
    // Build in:
    
    extern std::vector<std::string> ABC_STR;
    extern std::vector<const char*> ABC_CHAR;
    
    char *randomCharVector(std::vector<char*> vec);
    const char *randomConstCharVector(std::vector<const char*> vec);

    std::string randomStringVector(std::vector<std::string> vec);
}
