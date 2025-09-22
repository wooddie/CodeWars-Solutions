#include <iostream>
#include <cassert>

bool shared_bits(long a, long b)
{
    long common = a & b;
    int count = 0;

    while (common)
    {
        count += common & 1;
        common >>= 1;
        if (count >= 2)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    assert(shared_bits(1, 2) == (false));  // 0 in common
    assert(shared_bits(16, 8) == (false)); // 0 in common
    assert(shared_bits(1, 1) == (false));  // 1 in common
    assert(shared_bits(2, 3) == (false));  // 1 in common
    assert(shared_bits(7, 10) == (false)); // 1 in common
    assert(shared_bits(43, 77) == (true)); // 2 in common
    assert(shared_bits(7, 15) == (true));  // 3 in common
    assert(shared_bits(23, 7) == (true));  // 3 in common

    std::cout << "all tests passed!" << std::endl;

    return 0;
}

// Complete the method that returns true if 2 integers share at least two 1 bits,
// otherwise return false. For simplicity assume that all numbers are non-negative.

// Examples

//  7  =  0111 in binary
// 10  =  1010
// 15  =  1111
// 7 and 10 share only a single 1-bit (at index 2) --> false
// 7 and 15 share 3 1-bits (at indexes 1, 2, and 3) --> true
// 10 and 15 share 2 1-bits (at indexes 0 and 2) --> true

// Hint: you can do this with just string manipulation, but binary operators will make
// your life much easier.
