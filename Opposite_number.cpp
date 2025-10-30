#include <iostream>
#include <cassert>

int opposite(int number)
{
    return (number > 0) ? number * -1 : abs(number);
}

int main()
{
    assert(opposite(1) == (-1));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}