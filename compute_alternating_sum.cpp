#include <iostream>
#include <vector>

class Solution
{
public:
    int alternatingSum(std::vector<int> &nums)
    {
        int result = 0;

        for (int i = 0; i < nums.size(); ++i)
        {
            if (i % 2 == 0)
            {
                result += nums[i];
            }
            else
            {
                result -= nums[i];
            }
        }

        return result;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {1, 3, 5, 7};
    std::cout << s1.alternatingSum(v) << std::endl;

    v = {100};
    std::cout << s1.alternatingSum(v) << std::endl;

    return 0;
}