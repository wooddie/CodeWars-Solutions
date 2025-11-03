#include <iostream>
#include <vector>
#include <unordered_map>

class Solution
{
public:
    int sumDivisibleByK(std::vector<int> &nums, int k)
    {
        std::unordered_map<int, int> list;

        for (const auto &n : nums)
        {
            list[n]++;
        }

        int sum = 0;

        for (const auto &a : list)
        {
            if (a.second % k == 0)
                sum += a.first * a.second;
        }

        return sum;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {1, 2, 2, 3, 3, 3, 3, 4};
    std::cout << s1.sumDivisibleByK(v, 2) << std::endl;

    v = {1, 2, 3, 4, 5};
    std::cout << s1.sumDivisibleByK(v, 2) << std::endl;

    v = {4, 4, 4, 1, 2, 3};
    std::cout << s1.sumDivisibleByK(v, 3) << std::endl;

    return 0;
}