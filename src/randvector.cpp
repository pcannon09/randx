#include "include.hpp"
#include "uniformDist.hpp"
#include "randnum.hpp"

namespace randx
{
    // Build in:

    std::vector<std::string> ABC_STR = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
    std::vector<const char*> ABC_CHAR = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};

    char *randomCharVector(std::vector<char*> vec)
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        
        int randomIndex = std::uniform_int_distribution<int>(0, vec.size() - 1)(gen); // generate a random index
        
        return vec[randomIndex];
    }

    const char *randomConstCharVector(std::vector<const char*> vec)
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        
        int randomIndex = std::uniform_int_distribution<int>(0, vec.size() - 1)(gen); // generate a random index
        
        return vec[randomIndex];
    }

    std::string randomStringVector(std::vector<std::string> vec)
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        
        int randomIndex = std::uniform_int_distribution<int>(0, vec.size() - 1)(gen); // generate a random index
        
        return vec[randomIndex];
    }
}
