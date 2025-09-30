#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
    void moveZeroes(std::vector<int> &nums)
    {
        auto newEnd = std::remove(nums.begin(), nums.end(), 0);

        std::fill(newEnd, nums.end(), 0);

        for(int n : nums)
        {
            std::cout << n << " ";
        }
        std::cout << std::endl;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {0, 1, 0, 3, 12};
    s1.moveZeroes(v);

    v = {0};
    s1.moveZeroes(v);

    return 0;
}