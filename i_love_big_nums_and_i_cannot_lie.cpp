#include <string>
#include <vector>
#include <cassert>
#include <iostream>

std::string biggest(const std::vector<int> &nums)
{
    // your code here
}

int main()
{
    assert(biggest({1, 2, 3}) == ("321"));
    assert(biggest({3, 30, 34, 5, 9}) == ("9534330"));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}

// Write a function that given an array of numbers >= 0, 
// will arrange them such that they form the biggest number.

// For example:

// [1, 2, 3] --> "321" (3-2-1)
// [3, 30, 34, 5, 9] --> "9534330" (9-5-34-3-30)
// The results will be large so make sure to return a string.