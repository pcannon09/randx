#include "include.hpp"
#include "randnum.hpp"

namespace randx
{
    std::string randomString(std::string str)
    {
        return std::string(1, str[randx::randomInt(0, str.size() - 1)]);
    }

    std::string randomChar(std::string str)
    {
        return std::string(1, str[randx::randomInt(0, str.size() - 1)]).c_str();
    }
}
