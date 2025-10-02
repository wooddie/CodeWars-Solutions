#include <vector>
#include <iostream>
#include <cassert>

std::vector<int> get_even_numbers(const std::vector<int> &arr)
{
    std::vector<int> result;

    for (int n : arr)
    {
        if (n % 2 == 0)
        {
            result.push_back(n);
        }
    }

    return result;
}

int main()
{

    assert(get_even_numbers(std::vector<int>{2, 4, 5, 6}) == (std::vector<int>{2, 4, 6}));

    assert(get_even_numbers(std::vector<int>{}) == (std::vector<int>{}));

    assert(get_even_numbers(std::vector<int>{1}) == (std::vector<int>{}));

    assert(get_even_numbers(std::vector<int>{1, 2}) == (std::vector<int>{2}));

    assert(get_even_numbers(std::vector<int>{1, 2, 3, 4, 5}) == (std::vector<int>{2, 4}));

    assert(get_even_numbers(std::vector<int>{2, 4, 6, 8}) == (std::vector<int>{2, 4, 6, 8}));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}