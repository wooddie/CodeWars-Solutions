#include <cassert>
#include <iostream>
#include <vector>

long sumTwoSmallestNumbers(std::vector<int> numbers)
{
    int n = 0;
    long sum = 0;

    while (n <= 2)
    {
        for (int n : numbers)
        {

        }
    }

    return 0;
}

int main()
{
    long expected = 13;

    long actual = sumTwoSmallestNumbers({5, 8, 12, 19, 22});

    assert(actual == (expected));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}

// Create a function that returns the sum of the two lowest positive numbers 
// given an array of minimum 4 positive integers. No floats or non-positive 
// integers will be passed.

// For example, when an array is passed like [19, 5, 42, 2, 77], the output 
// should be 7.

// [10, 343445353, 3453445, 3453545353453] should return 3453455.