#include <iostream>
#include <vector>

class Solution
{
public:
    int findClosestNumber(std::vector<int> &nums)
    {
        int closest = nums[0];

        for (int n : nums)
        {
            if (std::abs(n) < std::abs(closest))
            {
                closest = n;
            }
            else if (std::abs(n) == std::abs(closest) && n > closest)
            {
                closest = n;
            }
        }

        return closest;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {-4, -2, 1, 4, 8};
    std::cout << s1.findClosestNumber(v) << std::endl; //* 1

    v = {2, -1, 1};
    std::cout << s1.findClosestNumber(v) << std::endl; //* 1

    return 0;
}