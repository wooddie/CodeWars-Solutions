#include <iostream>
#include <vector>

class Solution
{
public:
    bool canJump(std::vector<int> &nums)
    {
        int maxDist = 0;

        for (int i = 0; i < nums.size(); ++i)
        {
            if (i > maxDist)
            {
                return false;
            }
            if (maxDist >= nums.size() - 1)
            {
                return true;
            }

            maxDist = std::max(maxDist, nums[i] + i);
        }

        return false;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {2, 3, 1, 1, 4};
    std::cout << std::boolalpha << s1.canJump(v) << std::endl;
    v = {3, 2, 1, 0, 4};
    std::cout << std::boolalpha << s1.canJump(v) << std::endl;

    return 0;
}