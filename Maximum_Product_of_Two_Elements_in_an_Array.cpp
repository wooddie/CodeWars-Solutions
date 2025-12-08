#include <iostream>
#include <vector>

class Solution
{
public:
    int maxProduct(std::vector<int> &nums)
    {
        int maxProd = 0;

        for (int i = 0; i < nums.size(); ++i)
        {
            for (int j = i + 1; j < nums.size(); ++j)
            {
                maxProd = std::max(maxProd, ((nums[i] - 1) * (nums[j] - 1)));
            }
        }

        // second solution - faster than current
        // std::sort(nums.begin(), nums.end());
        // int s = nums.size();

        // return (nums[s - 2] - 1) * (nums[s - 1] - 1);

        return maxProd;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {3, 4, 5, 2};
    std::cout << s1.maxProduct(v) << std::endl;

    v = {1, 5, 4, 5};
    std::cout << s1.maxProduct(v) << std::endl;

    v = {3, 7};
    std::cout << s1.maxProduct(v) << std::endl;

    return 0;
}