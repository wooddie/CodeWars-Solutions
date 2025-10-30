#include <iostream>
#include <vector>

class Solution
{
public:
    int firstMissingPositive(std::vector<int> &nums)
    {
        std::vector<int> vec(nums.size(), 0);

        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] >= 1 && nums[i] <= nums.size())
            {
                vec[nums[i] - 1] = nums[i];
            }
        }

        for (int i = 0; i < vec.size(); ++i)
        {
            if (vec[i] != i + 1)
            {
                return i + 1;
            }
        }

        return nums.size() + 1;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {1, 2, 0};
    std::cout << s1.firstMissingPositive(v) << std::endl;

    v = {3, 4, -1, 1};
    std::cout << s1.firstMissingPositive(v) << std::endl;

    v = {7, 8, 9, 11, 12};
    std::cout << s1.firstMissingPositive(v) << std::endl;

    return 0;
}