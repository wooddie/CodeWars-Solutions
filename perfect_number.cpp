#include <iostream>

class Solution
{
public:
    bool checkPerfectNumber(int num)
    {
        if (num <= 1)
        {
            return false;
        }

        long long sum = 1;
        int limit = sqrt(num);

        for (int i = 2; i <= limit; ++i)
        {
            if (num % i == 0)
            {
                sum += i;

                int other_divisor = num / i;
                if (other_divisor != i)
                {
                    sum += other_divisor;
                }
            }

            if (sum > num)
            {
                return false;
            }
        }

        return sum == num;
    }
};

int main()
{
    Solution s1;

    std::cout << std::boolalpha << s1.checkPerfectNumber(28) << std::endl;
    std::cout << std::boolalpha << s1.checkPerfectNumber(7) << std::endl;

    return 0;
}