#include <iostream>
#include <cassert>
#include <vector>
#include <numeric>

int sum(std::vector<int> numbers)
{
    if (numbers.empty() || numbers.size() == 1)
    {
        return 0;
    }

    int result = std::accumulate(numbers.begin(), numbers.end(), 0);

    auto pairElements = std::minmax_element(numbers.begin(), numbers.end());

    int minValue = *pairElements.first;
    int maxValue = *pairElements.second;

    return result - minValue - maxValue;
}

int main()
{
    assert(sum({6, 2, 1, 8, 10}) == (16));
    assert(sum({1, 1, 11, 2, 3}) == (6));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}