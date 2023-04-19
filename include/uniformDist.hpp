#pragma once

#include "uniformDist.hpp"

#include "include.hpp"

namespace randx
{
    typedef std::uniform_int_distribution<std::mt19937::result_type> randIntDist;
    typedef std::uniform_real_distribution<float> randFloatDist;
    typedef std::mt19937 randomGenerator;
}
