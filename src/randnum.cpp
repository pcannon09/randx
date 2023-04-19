#include "include.hpp"
#include "uniformDist.hpp"
#include "uints.hpp"

namespace randx
{
    Uint::UintF32 randomInt(int min, int max)
    {
        std::random_device dev;
        randx::randomGenerator randomGen(dev());
        randx::randIntDist randDistVariable(min, max);
        
        return randDistVariable(randomGen);
    }

    float randomFloat(float min, float max)
    {
        std::random_device dev;
        randx::randomGenerator randomGen(dev());
        randx::randFloatDist randDistVariable(min, max);

        return randDistVariable(randomGen);
    }
}