#include <cassert>
#include <iostream>

std::vector<int> digitize(unsigned long n)
{
    std::vector<int> result;

    if (n == 0) return {0};

    while (n > 0)
    {
        int digit = n % 10;
        result.push_back(digit);
        n = n / 10;
    }

    return result;
}

int main()
{
    assert(digitize(348597) == (std::vector<int>({7, 9, 5, 8, 4, 3})));
    assert(digitize(35231) == (std::vector<int>({1, 3, 2, 5, 3})));
    assert(digitize(0) == (std::vector<int>({0})));

    std::cout << "all tests passed!" << std::endl;
    return 0;
}