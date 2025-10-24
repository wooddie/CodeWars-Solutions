#include <iostream>
#include <vector>

class Solution
{
public:
    std::vector<int> pivotArray(std::vector<int> &nums, int pivot)
    {
        std::vector<int> less;
        std::vector<int> equal;
        std::vector<int> more;

        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] < pivot)
            {
                less.push_back(nums[i]);
            }
            else if (nums[i] == pivot)
            {
                equal.push_back(nums[i]);
            }
            else
            {
                more.push_back(nums[i]);
            }
        }

        less.insert(less.end(), equal.begin(), equal.end());
        less.insert(less.end(), more.begin(), more.end());

        return less;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {9, 12, 5, 10, 14, 3, 10};
    for (int n : s1.pivotArray(v, 10))
    {
        std::cout << n;
    }
    std::cout << std::endl;

    v = {-3, 4, 3, 2};
    for (int n : s1.pivotArray(v, 2))
    {
        std::cout << n;
    }
    std::cout << std::endl;

    return 0;
}