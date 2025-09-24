#include <iostream>

class Solution
{
public:
    int divide(int dividend, int divisor)
    {
        if (dividend == INT_MIN && divisor == -1)
        {
            return INT_MAX;
        }

        long long a = llabs((long long)dividend);
        long long b = llabs((long long)divisor);
        long long result = 0;

        while (a >= b)
        {
            long long temp = b;
            long long multiple = 1;

            while ((temp << 1) <= a)
            {
                temp <<= 1;
                multiple <<= 1;
            }

            a -= temp;
            result += multiple;
        }

        if ((dividend > 0) ^ (divisor > 0))
        {
            result = -result;
        }

        if (result > INT_MAX)
            return INT_MAX;
        if (result < INT_MIN)
            return INT_MIN;

        return (int)result;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.divide(10, 3) << std::endl;
    std::cout << s1.divide(7, -3) << std::endl;

    return 0;
}