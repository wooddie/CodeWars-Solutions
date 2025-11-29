#include <iostream>
#include <vector>
#include <numeric>

class Solution
{
public:
    int minOperations(std::vector<int> &nums, int k)
    {
        int sum = std::accumulate(nums.begin(), nums.end(), 0);

        return sum % k;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {3, 9, 7};
    std::cout << s1.minOperations(v, 5) << std::endl;
    v = {4, 1, 3};
    std::cout << s1.minOperations(v, 4) << std::endl;
    v = {3, 2};
    std::cout << s1.minOperations(v, 6) << std::endl;

    return 0;
}