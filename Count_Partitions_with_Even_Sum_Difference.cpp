#include <iostream>
#include <vector>
#include <numeric>

class Solution
{
public:
    int countPartitions(std::vector<int> &nums)
    {
        int count = 0;
        int leftSum = 0;
        int totalSum = std::accumulate(nums.begin(), nums.end(), 0);

        for (int i = 0; i < nums.size() - 1; ++i)
        {
            leftSum += nums[i];

            if ((leftSum - (totalSum - leftSum)) % 2 == 0)
            {
                count++;
            }
        }

        return count;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {10, 10, 3, 7, 6};
    std::cout << s1.countPartitions(v) << std::endl;

    v = {1, 2, 2};
    std::cout << s1.countPartitions(v) << std::endl;

    v = {2, 4, 6, 8};
    std::cout << s1.countPartitions(v) << std::endl;

    return 0;
}