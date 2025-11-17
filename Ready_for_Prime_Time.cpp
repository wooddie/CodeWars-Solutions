#include <iostream>
#include <cassert>
#include <vector>

bool isPrime(unsigned num)
{
    for (int i = 2; i < num; ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

std::vector<unsigned> prime(unsigned n)
{
    std::vector<unsigned> result;

    if (n >= 2)
    {
        result.push_back(2);
    }
    else
    {
        return result;
    }

    for (unsigned i = 3; i <= n; ++i)
    {
        if (isPrime(i))
        {
            result.push_back(i);
        }
    }

    return result;
}

int main()
{
    std::vector<unsigned> expected = {};
    assert(prime(0) == expected);
    assert(prime(1) == expected);
    expected = {2};
    assert(prime(2) == expected);
    expected = {2, 3, 5, 7, 11, 13, 17, 19, 23};
    assert(prime(23) == expected);

    std::cout << "all tests passed!" << std::endl;

    return 0;
}