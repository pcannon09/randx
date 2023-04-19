#include "include.hpp"
#include "randnum.hpp"
#include "uniformDist.hpp"

namespace randx
{
    bool randomBool()
    {
        auto randomBoolGen = randx::randomInt(0, 1);
        
        if (randomBoolGen == 1)
        {
            return true;
        }

        else
        {
            return false;
        }
    }
}