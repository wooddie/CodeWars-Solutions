#include <vector>
#include <iostream>

class Solution
{
public:
    std::vector<int> sortedSquares(std::vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); ++i)
        {
            nums[i] = nums[i] * nums[i];
        }

        std::sort(nums.begin(), nums.end());

        return nums;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {-4, -1, 0, 3, 10};
    for (int n : s1.sortedSquares(v))
    {
        std::cout << n;
    }
    std::cout << std::endl;

    v = {-7, -3, 2, 3, 11};
    for (int n : s1.sortedSquares(v))
    {
        std::cout << n;
    }
    std::cout << std::endl;

    return 0;
}