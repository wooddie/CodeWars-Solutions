#include <iostream>
#include <vector>

class Solution
{
public:
    int smallestIndex(std::vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); ++i)
        {
            int sum = 0;

            while (nums[i] > 0)
            {
                int digit = nums[i] % 10;
                nums[i] /= 10;
                sum += digit;
            }

            if (sum == i)
            {
                return i;
            }
        }

        return -1;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {1, 3, 2};
    std::cout << s1.smallestIndex(v) << std::endl;

    v = {1, 10, 11};
    std::cout << s1.smallestIndex(v) << std::endl;

    v = {1, 2, 3};
    std::cout << s1.smallestIndex(v) << std::endl;

    return 0;
}