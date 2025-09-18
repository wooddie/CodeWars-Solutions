#include <iostream>
#include <cassert>
#include <vector>
#include <cstddef>

std::size_t num_combo(const std::vector<int> &arr, int num)
{
    return 0;
}

int main()
{
    assert(num_combo({5, 0, 0, 2}, 7) == (2)); 
    assert(num_combo({0, 0, 0, 0, 0}, 0) == (5));
    assert(num_combo({0, 0, 0, 0, 1}, 1) == (4));
    assert(num_combo({0, 0, 0, 0, 1}, 2) == (0));
    assert(num_combo({2, 0, 0, 0, 1}, 1) == (1));
    assert(num_combo({2, 0, 0, 0, 1}, 3) == (3));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}

// Consider a sequence of integers xs, and a target integer n. 
// Your task is to write a function which counts how many combinations of indexes 
// of xs meet two rules:

// The size of the combination must be 1 less than the size of xs
// The sum of elements corresponding to the indexes must equal n
// For example:

// xs = [5, 0, 0, 2], n = 7

// All combinations of indexes (of size 3)
// {0, 1, 2} -> 5 + 0 + 0 = 5
// {0, 1, 3} -> 5 + 0 + 2 = 7
// {0, 2, 3} -> 5 + 0 + 2 = 7
// {1, 2, 3} -> 0 + 0 + 2 = 2

// Only 2 combinations match the target -> Answer = 2