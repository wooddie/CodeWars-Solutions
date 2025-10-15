#include <iostream>
#include <cassert>
#include <vector>
#include <algorithm>

int consecutive(const std::vector<int> &arr)
{
    if (arr.empty() || arr.size() < 2)
    {
        return 0;
    }

    std::vector<int> vec = arr;
    auto max_it = std::max_element(vec.begin(), vec.end());
    auto min_it = std::min_element(vec.begin(), vec.end());

    int max_value = *max_it;
    int min_value = *min_it;

    return (max_value - (min_value) + 1) - arr.size();
}

int main()
{
    int consecutive(const std::vector<int> &arr);

    std::vector<int> arr = {4, 8, 6};
    assert(consecutive(arr) == (2));

    arr = {1, 2, 3, 4};
    assert(consecutive(arr) == (0));

    arr = {};
    assert(consecutive(arr) == (0));

    arr = {1};
    assert(consecutive(arr) == (0));

    arr = {-10};
    assert(consecutive(arr) == (0));

    arr = {1, -1};
    assert(consecutive(arr) == (1));

    arr = {-10, -9};
    assert(consecutive(arr) == (0));

    arr = {0};
    assert(consecutive(arr) == (0));

    arr = {10, -10};
    assert(consecutive(arr) == (19));

    arr = {-10, 10};
    assert(consecutive(arr) == (19));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}