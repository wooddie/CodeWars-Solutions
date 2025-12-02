#include <iostream>
#include <numeric>
#include <vector>

class Solution
{
public:
    int pivotIndex(std::vector<int> &nums)
    {
        int leftSum = 0;
        int totalSum = std::accumulate(nums.begin(), nums.end(), 0);

        for (int i = 0; i < nums.size(); ++i)
        {
            if ((totalSum - leftSum - nums[i]) == leftSum)
            {
                return i;
            }
            else
            {
                leftSum += nums[i];
            }
        }

        return -1;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {1, 7, 3, 6, 5, 6};
    std::cout << s1.pivotIndex(v) << std::endl;

    v = {1, 2, 3};
    std::cout << s1.pivotIndex(v) << std::endl;

    v = {2, 1, -1};
    std::cout << s1.pivotIndex(v) << std::endl;

    return 0;
}