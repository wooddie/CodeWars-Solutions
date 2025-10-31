#include <iostream>
#include <vector>
#include <unordered_map>

class Solution
{
public:
    std::vector<int> singleNumber(std::vector<int> &nums)
    {
        std::vector<int> result;
        std::unordered_map<int, int> list;

        for (const auto &n : nums)
        {
            list[n]++;
        }

        for (const auto &l : list)
        {
            if (l.second == 1)
            {
                result.push_back(l.first);
            }
        }

        return result;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {1, 2, 1, 3, 2, 5};
    for (const auto &a : s1.singleNumber(v))
    {
        std::cout << a;
    }
    std::cout << std::endl;

    v = {-1, 0};
    for (const auto &a : s1.singleNumber(v))
    {
        std::cout << a;
    }
    std::cout << std::endl;

    v = {0, 1};
    for (const auto &a : s1.singleNumber(v))
    {
        std::cout << a;
    }
    std::cout << std::endl;

    return 0;
}