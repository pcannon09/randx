#include "include.hpp"
#include "uniformDist.hpp"
#include "randnum.hpp"

namespace randx
{
    // Build in:

    std::vector<std::string> ABC_STR = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};

    std::string randomStringVector(std::vector<std::string> vec)
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        
        int randomIndex = std::uniform_int_distribution<int>(0, (int)(vec.size() - 1))(gen); // generate a random index
        
        return vec[randomIndex];
    }
}
