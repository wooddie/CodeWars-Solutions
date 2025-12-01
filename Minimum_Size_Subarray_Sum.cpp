#include <iostream>
#include <vector>

class Solution
{
public:
    int minSubArrayLen(int target, std::vector<int> &nums)
    {
        int left = 0;
        int sum = 0;
        int len = INT_MAX;

        for (int right = 0; right < nums.size(); ++right)
        {
            sum += nums[right];

            while (sum >= target)
            {
                len = std::min(len, right - left + 1);
                sum -= nums[left];
                left++;
            }
        }

        return len == INT_MAX ? 0 : len;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {2, 3, 1, 2, 4, 3};
    std::cout << s1.minSubArrayLen(7, v) << std::endl;
    v = {1, 4, 4};
    std::cout << s1.minSubArrayLen(4, v) << std::endl;
    v = {1, 1, 1, 1, 1, 1, 1, 1};
    std::cout << s1.minSubArrayLen(11, v) << std::endl;

    return 0;
}