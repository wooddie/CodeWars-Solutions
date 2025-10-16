#include <iostream>

class Solution
{
public:
    int countDigitOne(int n)
    {
        int result = 0;
        long long d = 1;

        while (d <= n)
        {
            long long higher = n / (d * 10);
            long long current = (n / d) % 10;
            long long lower = n % d;

            if (current == 0)
            {
                result += higher * d;
            }
            else if (current == 1)
            {
                result += higher * d + (lower + 1);
            }
            else if (current > 1)
            {
                result += (higher + 1) * d;
            }

            d *= 10;
        }

        return result;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.countDigitOne(13) << std::endl;
    std::cout << s1.countDigitOne(0) << std::endl;

    return 0;
}