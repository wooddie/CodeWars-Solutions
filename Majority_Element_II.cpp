#include <iostream>
#include <vector>
#include <unordered_map>

class Solution
{
public:
    std::vector<int> majorityElement(std::vector<int> &nums)
    {
        std::vector<int> result;
        std::unordered_map<int, int> list;

        for (const auto &num : nums)
        {
            list[num]++;
        }

        for (const auto &[key, value] : list)
        {
            if (value > (nums.size() / 3))
            {
                result.push_back(key);
            }
        }

        return result;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {3, 2, 3};
    for (const auto &n : s1.majorityElement(v))
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    v = {1};
    for (const auto &n : s1.majorityElement(v))
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    v = {1, 2};
    for (const auto &n : s1.majorityElement(v))
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}