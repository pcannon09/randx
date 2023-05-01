# Randx library
Set random ints, floats, an charecters in C++! It's the easiest way!

## How to use it:

You need to add it to vendor / include directory and:

```cpp
#include "dir/randx.hpp"

// Random integers:

auto variable1 = randx::randomInt(20, 80); // To set random integers with in a range of 20 - 80

std::cout << variable1 << "\n"; // It will print a number of a range of 20 - 80

// Random floats

auto variable2 = randx::randomFloat(1, 8); // It will set a random float of 1 - 8

// Random chars / strings in vector list

std::vector<std::string> strVector1 = {"H", "E", "L", "L", "O", ",", "W", "O", "R", "D", "!"}; // Create an array

std::cout<<"Random Chars from ABC:\n";

repeat(20) // <- You can repeat things doing like this, its a for loop that starts in 0 and repeats it for 20 times
{
    auto variable4 = randx::randomConstCharVector(randx::ABC_CHAR); // Picks a random letter of the 'strVector1' variable

    std::cout<<variable4<<"\n";
}

 std::string inputVar = "";

std::cout<<"Type a word: ";
std::cin>>inputVar;

std::cout<<"Random string of variable that contains: '"<<inputVar<<"' is:\n";

std::cout<<randx::randomString(inputVar)<<"\n"; // Get random str

////

std::string inputVar2 = "";

std::cout<<"Type a word (For char*): ";
std::cin>>inputVar2;

std::cout<<"Random string of variable that contains: '"<<inputVar2<<"' is:\n";

std::cout<<randx::randomChar(inputVar2)<<"\n"; // Get random char (Variable must be str, it automaticly sets to a .c_str())

```
