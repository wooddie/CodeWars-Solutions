#include <iostream>

class Solution
{
public:
    int numWaterBottles(int numBottles, int numExchange)
    {
        int full = numBottles;
        int empty = 0;
        int total = 0;

        while (full > 0)
        {
            total += full;
            empty += full;
            full = 0;

            full = empty / numExchange;
            empty = empty % numExchange;
        }

        return total;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.numWaterBottles(9, 3) << std::endl;
    std::cout << s1.numWaterBottles(15, 4) << std::endl;

    return 0;
}