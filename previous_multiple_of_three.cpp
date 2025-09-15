#include <cassert>
#include <iostream>

int prev_mult_of_three(int n)
{
    return -1;
}

int main()
{
    assert(prev_mult_of_three(1) == (-1));
    assert(prev_mult_of_three(25) == (-1));
    assert(prev_mult_of_three(36) == (36));
    assert(prev_mult_of_three(1244) == (12));
    assert(prev_mult_of_three(952406) == (9));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}

// Given a positive integer n: 0 < n < 1e6, remove the last digit until 
// you're left with a number that is a multiple of three.

// Return n if the input is already a multiple of three, and if no such 
// number exists, return null, a similar empty value, or -1.

// Examples

// 1      => null
// 25     => null
// 36     => 36
// 1244   => 12
// 952406 => 9