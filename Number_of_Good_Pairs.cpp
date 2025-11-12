#include <iostream>
#include <vector>

class Solution
{
public:
    int numIdenticalPairs(std::vector<int> &nums)
    {
        int result = 0;

        for (int i = 0; i < nums.size(); ++i)
        {
            for (int j = i + 1; j < nums.size(); ++j)
            {
                if (nums[i] == nums[j] && i < j)
                {
                    result++;
                }
            }
        }

        return result;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {1, 2, 3, 1, 1, 3};
    std::cout << s1.numIdenticalPairs(v) << std::endl;

    v = {1, 1, 1, 1};
    std::cout << s1.numIdenticalPairs(v) << std::endl;

    v = {1, 2, 3};
    std::cout << s1.numIdenticalPairs(v) << std::endl;

    return 0;
}