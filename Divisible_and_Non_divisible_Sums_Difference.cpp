#include <iostream>

class Solution
{
public:
    int differenceOfSums(int n, int m)
    {
        int notDivisible = 0;
        int divisible = 0;

        for (int i = 1; i <= n; ++i)
        {
            if (i % m == 0)
            {
                divisible += i;
            }
            else
            {
                notDivisible += i;
            }
        }

        return notDivisible - divisible;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.differenceOfSums(10, 3) << std::endl;
    std::cout << s1.differenceOfSums(5, 6) << std::endl;
    std::cout << s1.differenceOfSums(5, 1) << std::endl;

    return 0;
}