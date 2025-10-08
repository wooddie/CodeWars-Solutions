#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
    int thirdMax(std::vector<int> &nums)
    {
        if (nums.size() < 3)
        {
            return nums.back();
        }

        std::sort(nums.begin(), nums.end());
        auto pos = std::unique(nums.begin(), nums.end());
        nums.erase(pos, nums.end());

        if (nums.size() < 3)
        {
            return nums.back();
        }

        return nums[nums.size() - 3];
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {3, 2, 1};
    std::cout << s1.thirdMax(v) << std::endl;

    v = {1, 2};
    std::cout << s1.thirdMax(v) << std::endl;

    v = {2, 2, 3, 1};
    std::cout << s1.thirdMax(v) << std::endl;

    return 0;
}