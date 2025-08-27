#include <vector>
#include <climits>
#include <cstddef>
#include <iostream>
#include <cassert>

std::ptrdiff_t least_larger(const std::vector<int> &a, std::size_t i)
{
    int min = INT_MAX;
    int index = -1;
    int value = a[i];

    for (int k = 0; k < a.size(); ++k)
    {
        if (a[k] > value && a[k] < min)
        {
            min = a[k];
            index = k;
        }
    }

    return index;
}

int main()
{
    assert(least_larger({4, 1, 3, 5, 6}, 4) == (-1));
    assert(least_larger({1, 3, 5, 2, 4}, 0) == (3));
    assert(least_larger({4, 1, 3, 5, 6}, 0) == (3));
    std::cout << "all tests passed!" << std::endl;
}