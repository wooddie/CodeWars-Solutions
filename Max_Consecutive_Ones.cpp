#include <iostream>
#include <vector>

class Solution
{
public:
    int findMaxConsecutiveOnes(std::vector<int> &nums)
    {
        int res = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == 1)
            {
                count++;
            }
            else
            {
                res = std::max(count, res);
                count = 0;
            }
        }

        res = std::max(count, res);

        return res;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {1, 1, 0, 1, 1, 1};
    std::cout << s1.findMaxConsecutiveOnes(v) << std::endl;

    v = {1, 0, 1, 1, 0, 1};
    std::cout << s1.findMaxConsecutiveOnes(v) << std::endl;

    return 0;
}