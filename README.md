# Randx library
Set random ints, floats, vectors and characters in C++! It's the easiest way!

# Version
## 1.1.0

## How to use it:

---

This project is now part from Eduli (https://github.com/EduliSoftware)

You need to add it to vendor / include directory and:

```cpp
#include "dir/randx.hpp"

// Random integers:

auto variable1 = randx::randomInt(20, 80); // To set random integers with in a range of 20 - 80

std::cout << variable1 << "\n"; // It will print a number of a range of 20 - 80

// Random floats

auto variable2 = randx::randomFloat(1, 8); // It will set a random float of 1 - 8

// Random strings in vector list

std::vector<std::string> strVector1 = {"H", "E", "L", "L", "O", ",", "W", "O", "R", "D", "!"}; // Create an array

std::string inputVar = "";

std::cout<<"Type a word: ";
std::cin>>inputVar;

std::cout<<"Random string of variable that contains: '"<<inputVar<<"' is:\n";

std::cout<<randx::randomString(inputVar)<<"\n"; // Get random str
```
