#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>

class Solution
{
public:
    std::vector<int> topKFrequent(std::vector<int> &nums, int k)
    {
        std::vector<int> result;
        std::multimap<int, int> sorted;
        std::unordered_map<int, int> freq;

        for (const auto &n : nums)
        {
            freq[n]++;
        }

        for (auto &[num, count] : freq)
        {
            sorted.insert({count, num});
        }

        int ins = 0;

        for (auto it = sorted.rbegin(); it != sorted.rend() && ins < k; ++it, ++ins)
        {
            result.push_back(it->second);
        }

        return result;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {1, 1, 1, 2, 2, 3};
    for (const auto &a : s1.topKFrequent(v, 2))
    {
        std::cout << a;
    }
    std::cout << std::endl;

    v = {1};
    for (const auto &a : s1.topKFrequent(v, 1))
    {
        std::cout << a;
    }
    std::cout << std::endl;

    v = {1, 2, 1, 2, 1, 2, 3, 1, 3, 2};
    for (const auto &a : s1.topKFrequent(v, 2))
    {
        std::cout << a;
    }
    std::cout << std::endl;

    return 0;
}