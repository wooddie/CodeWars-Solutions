#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

class Solution
{
public:
    int sumOfDigits(int num)
    {
        int sum = 0;
        while (num > 0)
        {
            int digit = num % 10;
            sum += digit;
            num /= 10;
        }

        return sum;
    }

    int maximumSum(std::vector<int> &nums)
    {
        std::unordered_map<int, int> list;
        int result = -1;

        for (int i = 0; i < nums.size(); ++i)
        {
            int sum = sumOfDigits(nums[i]);

            if (list.contains(sum))
            {
                result = std::max(result, nums[i] + nums[list[sum]]);

                if (nums[i] > nums[list[sum]])
                {
                    list[sum] = i;
                }
            }
            else
            {
                list[sum] = i;
            }
        }

        return result;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {18, 43, 36, 13, 7};
    std::cout << s1.maximumSum(v) << std::endl;

    v = {10, 12, 19, 14};
    std::cout << s1.maximumSum(v) << std::endl;

    return 0;
}