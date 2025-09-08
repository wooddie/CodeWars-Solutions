#include <cassert>
#include <iostream>
#include <cmath>

bool isPrime(int num)
{
    if (num < 2)
    {
        return false;
    }
    if (num == 2)
    {
        return true;
    }
    if (num % 2 == 0)
    {
        return false;
    }

    for (int i = 3; i < std::sqrt(num); i += 2)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    assert(isPrime(0) == (false));
    assert(isPrime(1) == (false));
    assert(isPrime(2) == (true));
    assert(isPrime(3) == (true));
    assert(isPrime(4) == (false));
    assert(isPrime(5) == (true));
    assert(isPrime(6) == (false));

    std::cout << "all tests passed!" << std::endl;
    return 0;
}