#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
    void sortColors(std::vector<int> &nums)
    {
        std::sort(nums.begin(), nums.end());
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {2, 0, 2, 1, 1, 0};
    s1.sortColors(v);

    v = {2, 0, 1};
    s1.sortColors(v);

    return 0;
}