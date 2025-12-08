#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
    std::vector<int> sortArrayByParity(std::vector<int> &nums)
    {
        int index = 0;

        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] % 2 == 0)
            {
                std::swap(nums[i], nums[index]);
                index++;
            }
        }

        return nums;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {3, 1, 2, 4};
    for (const auto &a : s1.sortArrayByParity(v))
    {
        std::cout << a << "";
    }
    std::cout << std::endl;

    v = {0};
    for (const auto &a : s1.sortArrayByParity(v))
    {
        std::cout << a << "";
    }
    std::cout << std::endl;

    return 0;
}