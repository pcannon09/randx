#pragma once

#include "randnum.hpp"

#include "include.hpp"
#include "uints.hpp"

namespace randx
{
    typedef std::uniform_int_distribution<std::mt19937::result_type> randIntDist;
    typedef std::mt19937 randomGenerator;

    Uint::UintF32 randomInt(int min, int max);
    float randomFloat(float min, float max);
}
