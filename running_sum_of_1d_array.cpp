#include <iostream>
#include <vector>

class Solution
{
public:
    std::vector<int> runningSum(std::vector<int> &nums)
    {
        std::vector<int> result;
        int sum = 0;

        for (int i = 0; i < nums.size(); ++i)
        {
            sum += nums[i];
            result.push_back(sum);
        }

        return result;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {1, 2, 3, 4};
    for (int n : s1.runningSum(v))
    {
        std::cout << n;
    }
    std::cout << std::endl;

    v = {1, 1, 1, 1, 1};
    for (int n : s1.runningSum(v))
    {
        std::cout << n;
    }
    std::cout << std::endl;

    v = {3, 1, 2, 10, 1};
    for (int n : s1.runningSum(v))
    {
        std::cout << n;
    }
    std::cout << std::endl;

    return 0;
}