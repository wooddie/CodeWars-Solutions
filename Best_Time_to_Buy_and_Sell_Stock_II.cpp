#include <iostream>
#include <vector>

class Solution
{
public:
    int maxProfit(std::vector<int> &prices)
    {
        int result = 0;

        for (int i = 1; i < prices.size(); ++i)
        {
            result += std::max(0, prices[i] - prices[i - 1]);
        }

        return result;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {7, 1, 5, 3, 6, 4};
    std::cout << s1.maxProfit(v) << std::endl;

    v = {1, 2, 3, 4, 5};
    std::cout << s1.maxProfit(v) << std::endl;

    v = {7, 6, 4, 3, 1};
    std::cout << s1.maxProfit(v) << std::endl;

    return 0;
}