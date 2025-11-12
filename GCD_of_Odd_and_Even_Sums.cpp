#include <iostream>
#include <numeric>

class Solution
{
public:
    int gcdOfOddEvenSums(int n)
    {
        int max = n + n, oddSum = 0, evenSum = 0;

        for (int i = 1; i < max; ++i)
        {
            if (i % 2 == 0)
            {
                evenSum += i;
            }
            if (i % 2 != 0)
            {
                oddSum += i;
            }
        }

        return std::gcd(oddSum, evenSum);
    }
};

int main()
{
    Solution s1;

    std::cout << s1.gcdOfOddEvenSums(4) << std::endl;
    std::cout << s1.gcdOfOddEvenSums(5) << std::endl;

    return 0;
}