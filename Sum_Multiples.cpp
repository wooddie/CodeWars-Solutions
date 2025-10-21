#include <iostream>

class Solution
{
public:
    int sumOfMultiples(int n)
    {
        int sum = 0;
        for (int i = 1; i <= n; ++i)
        {
            if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
            {
                sum += i;
            }
        }

        return sum;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.sumOfMultiples(7) << std::endl;
    std::cout << s1.sumOfMultiples(10) << std::endl;
    std::cout << s1.sumOfMultiples(9) << std::endl;

    return 0;
}