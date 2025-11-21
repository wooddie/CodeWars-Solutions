#include <iostream>
#include <vector>

class Solution
{
public:
    std::vector<int> buildArray(std::vector<int> &nums)
    {
        std::vector<int> ans(nums.size());

        for (int i = 0; i < nums.size(); ++i)
        {
            ans[i] = nums[nums[i]];
        }

        return ans;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {0, 2, 1, 5, 3, 4};
    for (const auto &n : s1.buildArray(v))
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    v = {5, 0, 1, 2, 3, 4};
    for (const auto &n : s1.buildArray(v))
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}