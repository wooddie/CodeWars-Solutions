#include <iostream>
#include <vector>

class Solution
{
public:
    int smallestEqual(std::vector<int> &nums)
    {
        int result = INT_MAX;

        for (int i = 0; i < nums.size(); ++i)
        {
            if (i % 10 == nums[i] && i < result)
            {
                result = i;
            }
        }

        return (result < INT_MAX) ? result : -1;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {0, 1, 2};
    std::cout << s1.smallestEqual(v) << std::endl;

    v = {4, 3, 2, 1};
    std::cout << s1.smallestEqual(v) << std::endl;

    v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    std::cout << s1.smallestEqual(v) << std::endl;

    return 0;
}