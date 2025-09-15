#include <cassert>
#include <iostream>
#include <vector>

int find(const std::vector<int> &vec, int n)
{
    return 0;
}

int main()
{
    assert(find({1, 2, 3}, 1)               == (1));
    assert(find({1, 2, 3}, 10)              == (0));
    assert(find({1, 2, 3}, 7)               == (2));
    assert(find({1, 2, 3}, 5)               == (3));
    assert(find({1, 1, 1}, 1)               == (3));
    assert(find({1, 1, 1}, 2)               == (6));
    assert(find({1, 1, 1}, 3)              == (10));
    assert(find({1, 1, 1}, 4)               == (0));
    assert(find({3, 6, 9, 12}, 12)          == (5));
    assert(find({1, 4, 5, 8}, 8)            == (3));
    assert(find({3, 6, 9, 12}, 15)          == (5));
    assert(find({3, 6, 9, 12, 14, 18}, 30) == (21));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}

// Consider the array [3,6,9,12]. If we generate all the combinations with 
// repetition that sum to 12, we get 5 combinations: 
// [12], [6,6], [3,9], [3,3,6], [3,3,3,3]. The length of the sub-arrays 
// (such as [3,3,3,3] should be less than or equal to the length of the initial 
// array ([3,6,9,12]).

// Given an array of positive integers and a number n, count all combinations 
// with repetition of integers that sum to n. For example:

// find([3,6,9,12],12) = 5.