#include <vector>
#include <iostream>

class Solution
{
public:
    int singleNumber(std::vector<int> &nums)
    {
        int result = 0;

        for (int n : nums)
        {
            result ^= n;
        }

        return result;
    }
};

int main()
{
    Solution s1;
    std::vector<int> v = {2, 2, 1};
    std::cout << s1.singleNumber(v) << std::endl;
    v = {4, 1, 2, 1, 2};
    std::cout << s1.singleNumber(v) << std::endl;
    v = {1};
    std::cout << s1.singleNumber(v) << std::endl;

    return 0;
}