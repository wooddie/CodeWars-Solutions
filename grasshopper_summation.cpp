#include <cassert>
#include <iostream>

int summation(int num)
{
    return (num * (num + 1)) / 2;
}

int main()
{
    // Example usage
    assert(summation(1) == (1));
    assert(summation(8) == (36));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}