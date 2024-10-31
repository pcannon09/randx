#include <iostream>
#include "randx.hpp"

int main()
{
    auto variable1 = randx::randomInt(20, 80);
    auto variable2 = randx::randomFloat(1, 8);

    std::cout<<"Random integer: "<<variable1<<"\n";
    std::cout<<"Random float: "<<variable2<<"\n";
    std::cout<<"Random bools:\n";

    repeat(10)
    {
        bool variable3 = randx::randomBool();
        
        std::cout<<"\t"<<variable3<<"\n";
    }

    std::vector<std::string> strVector1 = {"H", "E", "L", "L", "O", ",", "W", "O", "R", "D", "!"};

    std::cout<<"Random Strings from an array that contains: HELLO, WORLD!:\n";

    repeat(10)
    {
        auto variable4 = randx::randomStringVector(strVector1);

        std::cout<<variable4<<"\n";
    }

    std::string inputVar = "";

    std::cout<<"Type a word: ";
    std::cin>>inputVar;
    
    std::cout<<"Random string of variable that contains: '"<<inputVar<<"' is:\n";

    std::cout<<randx::randomString(inputVar)<<"\n";

    return 0;
}
