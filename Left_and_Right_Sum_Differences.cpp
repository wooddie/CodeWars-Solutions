#include <iostream>
#include <vector>

class Solution
{
public:
    std::vector<int> leftRightDifference(std::vector<int> &nums)
    {
        std::vector<int> result(nums.size()), leftSum(nums.size()), rightSum(nums.size());
        int sumL = 0;
        int sumR = 0;

        for (int i = 0; i < nums.size(); ++i)
        {
            leftSum[i] = sumL;
            sumL += nums[i];
        }

        for (int i = nums.size() - 1; i >= 0; --i)
        {
            rightSum[i] = sumR;
            sumR += nums[i];
        }

        for (int i = 0; i < nums.size(); ++i)
        {
            result[i] = abs(leftSum[i] - rightSum[i]);
        }

        return result;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {10, 4, 8, 3};
    for (const auto &a : s1.leftRightDifference(v))
    {
        std::cout << a;
    }
    std::cout << std::endl;

    v = {1};
    for (const auto &a : s1.leftRightDifference(v))
    {
        std::cout << a;
    }
    std::cout << std::endl;

    return 0;
}