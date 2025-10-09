#include <vector>
#include <iostream>
#include <unordered_map>

class Solution
{
public:
    std::vector<int> findDuplicates(std::vector<int> &nums)
    {
        std::unordered_map<int, int> list;
        std::vector<int> result;

        for (const auto &n : nums)
        {
            list[n]++;
        }

        for (const auto &p : list)
        {
            if (p.second != 1)
            {
                result.push_back(p.first);
            }
        }

        return result;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {4, 3, 2, 7, 8, 2, 3, 1};
    for (const auto &n : s1.findDuplicates(v))
    {
        std::cout << n;
    }
    std::cout << std::endl;

    v = {1, 1, 2};
    for (const auto &n : s1.findDuplicates(v))
    {
        std::cout << n;
    }
    std::cout << std::endl;

    v = {1};
    for (const auto &n : s1.findDuplicates(v))
    {
        std::cout << n;
    }
    std::cout << std::endl;

    return 0;
}