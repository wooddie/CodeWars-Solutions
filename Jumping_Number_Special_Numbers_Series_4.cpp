#include <iostream>
#include <cassert>
#include <string>

std::string jumpingNumber(int number)
{
    std::string str = std::to_string(number);

    for (size_t i = 0; i < str.size() - 1; ++i)
    {
        if (abs((str[i] - '0') - (str[i + 1] - '0')) != 1)
        {
            return "Not!!";
        }
    }

    return "Jumping!!";
}

int main()
{
    assert(jumpingNumber(9) == ("Jumping!!"));
    assert(jumpingNumber(1) == ("Jumping!!"));
    assert(jumpingNumber(7) == ("Jumping!!"));

    assert(jumpingNumber(23) == ("Jumping!!"));
    assert(jumpingNumber(32) == ("Jumping!!"));
    assert(jumpingNumber(79) == ("Not!!"));
    assert(jumpingNumber(98) == ("Jumping!!"));

    assert(jumpingNumber(8987) == ("Jumping!!"));
    assert(jumpingNumber(4343456) == ("Jumping!!"));
    assert(jumpingNumber(98789876) == ("Jumping!!"));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}