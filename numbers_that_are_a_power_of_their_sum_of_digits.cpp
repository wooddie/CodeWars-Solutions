#include <iostream>
#include <cassert>

unsigned long powerSumDigTerm(unsigned int n)
{
    // your code here
    return n;
}

int main()
{
    unsigned int n = 1;
    unsigned long m = 81;
    assert(powerSumDigTerm(n) == (m));
    n = 2, m = 512;
    assert(powerSumDigTerm(n) == (m));
    n = 3, m = 2401;
    assert(powerSumDigTerm(n) == (m));
    n = 4, m = 4913;
    assert(powerSumDigTerm(n) == (m));
    n = 5, m = 5832;
    assert(powerSumDigTerm(n) == (m));
    n = 6, m = 17576;
    assert(powerSumDigTerm(n) == (m));
    n = 30, m = 248155780267521;
    assert(powerSumDigTerm(n) == (m));
    n = 31, m = 3904305912313344;
    assert(powerSumDigTerm(n) == (m));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}

// The number 81 has a special property, a certain power of the sum of its digits
// is equal to 81 (nine squared). Eighty one (81), is the first number in having
// this property (not considering numbers of one digit). The next one, is 512.
// Let's see both cases with the details

// 8 + 1 = 9 and 92 = 81

// 512 = 5 + 1 + 2 = 8 and 83 = 512

// We need to make a function that receives a number as argument n and returns
// the n-th term of this sequence of numbers.

// Examples (input --> output)

// 1 --> 81
// 2 --> 512
// Happy coding!