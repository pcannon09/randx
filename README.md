# randx
Set random ints, floats, an charecters in C++! Its the easiest way!

## How to use it:

You need to add it to vendor / include directory and

```
#include "dir/randx.hpp"

// Random integers:

auto variable1 = randx::randomInt(20, 80); // To set random integers with in a range of 20 - 80

std::cout << variable1 << "\n"; // It will print a number of a range of 20 - 80

// Random floats

auto variable2 = randx::randomFloat(1, 8); // It will set a random float of 1 - 8
```
