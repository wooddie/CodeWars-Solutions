#include <cassert>
#include <iostream>
#include <vector>

long sumTwoSmallestNumbers(std::vector<int> numbers)
{
    long sum = 0;
    std::vector<int> vec = numbers;

    for (int i = 0; i < 2; ++i)
    {
        auto it = std::min_element(vec.begin(), vec.end());
        sum += *it;
        vec.erase(it);
    }

    return sum;
}

int main()
{
    long expected = 13;

    long actual = sumTwoSmallestNumbers({5, 8, 12, 19, 22});
    std::cout << actual << std::endl;
    //assert(actual == (expected));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}

// Create a function that returns the sum of the two lowest positive numbers
// given an array of minimum 4 positive integers. No floats or non-positive
// integers will be passed.

// For example, when an array is passed like [19, 5, 42, 2, 77], the output
// should be 7.

// [10, 343445353, 3453445, 3453545353453] should return 3453455.