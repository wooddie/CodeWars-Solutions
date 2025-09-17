#include <iostream>
#include <cassert>
#include <array>

bool isPrime(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

std::array<unsigned int, 2> primeBefAft(const unsigned int num)
{
    unsigned int num1 = num-1;
    unsigned int num2 = num+1;

    while (true)
    {
        if (!isPrime(num1))
        {
            num1--;
        }
        else
        {
            break;
        }
    }

    while (true)
    {
        if (!isPrime(num2))
        {
            num2++;
        }
        else
        {
            break;
        }
    }

    return {num1, num2};
}

int main()
{
    unsigned int num = 100;
    std::array<unsigned int, 2> arr = {97, 101};
    assert(primeBefAft(num) == (arr));
    num = 97;
    arr = {89, 101};
    assert(primeBefAft(num) == (arr));
    num = 101;
    arr = {97, 103};
    assert(primeBefAft(num) == (arr));
    num = 120;
    arr = {113, 127};
    assert(primeBefAft(num) == (arr));
    num = 130;
    arr = {127, 131};
    assert(primeBefAft(num) == (arr));
    num = 500;
    arr = {499, 503};
    assert(primeBefAft(num) == (arr));
    num = 10004266;
    arr = {10004263, 10004273};
    assert(primeBefAft(num) == (arr));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}

// We need a function prime_bef_aft() that gives the largest prime below a certain
// given value n,

// befPrime or bef_prime (depending on the language),

// and the smallest prime larger than this value,

// aftPrime/aft_prime (depending on the language).

// The result should be output in a list like the following:

// primeBefAft == {befPrime, aftPrime}
// If n is a prime number it will give two primes, n will not be included in the result.

// Let's see some cases:

// PrimeBefAft(100) --> {97, 101}

// PrimeBefAft(97) --> {89, 101}

// PrimeBefAft(101) --> {97, 103}
// Range for the random tests:  1000 <= n <= 200000

// (The extreme and special case n = 2 will not be considered for the tests.
// Thanks Blind4Basics)

// Happy coding!!