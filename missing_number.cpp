#include <vector>
#include <iostream>

class Solution
{
public:
    int missingNumber(std::vector<int> &nums)
    {
        int sum1 = 0;
        int sum2 = 0;

        for (int i = 1; i <= nums.size(); ++i)
        {
            sum1 ^= i;
        }

        for (int n : nums)
        {
            sum2 ^= n;
        }

        return sum1 ^ sum2;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {3, 0, 1};
    std::cout << s1.missingNumber(v) << std::endl;

    v = {0, 1};
    std::cout << s1.missingNumber(v) << std::endl;

    v = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    std::cout << s1.missingNumber(v) << std::endl;

    return 0;
}