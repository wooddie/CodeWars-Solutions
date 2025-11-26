#include <iostream>
#include <vector>

class Solution
{
public:
    int maxProfit(std::vector<int> &prices)
    {
        int minPr = prices[0];
        int maxPr = 0;

        for (int i = 0; i < prices.size(); ++i)
        {
            minPr = std::min(minPr, prices[i]);
            maxPr = std::max(maxPr, (prices[i] - minPr));
        }

        return maxPr;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {7, 1, 5, 3, 6, 4};
    std::cout << s1.maxProfit(v) << std::endl;

    v = {7, 6, 4, 3, 1};
    std::cout << s1.maxProfit(v) << std::endl;

    return 0;
}