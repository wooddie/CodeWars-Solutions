#include <vector>
#include <iostream>
#include <cassert>

int findLongest(const std::vector<int> &numbers)
{
    auto it = std::max_element(numbers.begin(), numbers.end(), [](int a, int b)
    {
        size_t len_a = std::to_string(std::abs(a)).length();;
        size_t len_b = std::to_string(std::abs(b)).length();;

        if (len_a != len_b)
        {
            return len_a < len_b;
        }

        return false; 
    });

    return *it;
}

int main()
{
    assert(findLongest({1, 10, 100}) == 100);
    assert(findLongest({9000, 8, 800}) == 9000);
    assert(findLongest({8, 900, 500}) == 900);
    assert(findLongest({3, 40000, 100}) == 40000);
    assert(findLongest({1, 200, 100000}) == 100000);
    assert(findLongest({7000000, 10, 100}) == 7000000);

    std::cout << "all tests passed!" << std::endl;
}