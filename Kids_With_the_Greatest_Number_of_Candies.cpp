#include <iostream>
#include <vector>

class Solution
{
public:
    std::vector<bool> kidsWithCandies(std::vector<int> &candies, int extraCandies)
    {
        std::vector<bool> result;
        auto it = std::max_element(candies.begin(), candies.end());
        int max = *it;

        for (const auto &c : candies)
        {
            if (c + extraCandies >= max)
            {
                result.push_back(true);
            }
            else
            {
                result.push_back(false);
            }
        }

        return result;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {2, 3, 5, 1, 3};
    for (const auto &b : s1.kidsWithCandies(v, 3))
    {
        std::cout << b;
    }
    std::cout << std::endl;

    v = {4, 2, 1, 1, 2};
    for (const auto &b : s1.kidsWithCandies(v, 1))
    {
        std::cout << b;
    }
    std::cout << std::endl;

    v = {12, 1, 12};
    for (const auto &b : s1.kidsWithCandies(v, 10))
    {
        std::cout << b;
    }
    std::cout << std::endl;

    return 0;
}