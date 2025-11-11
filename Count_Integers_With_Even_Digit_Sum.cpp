#include <iostream>

class Solution
{
public:
    int countEven(int num)
    {
        int count = 0;

        for (int i = 2; i <= num; ++i)
        {
            int cur = i;

            if (cur < 10 && cur % 2 == 0)
            {
                count++;
            }

            if (cur > 10)
            {
                int sum = 0;

                while (cur > 0)
                {
                    int digit = cur % 10;
                    sum += digit;
                    cur /= 10;
                }

                if (sum % 2 == 0)
                {
                    count++;
                }
            }
        }

        return count;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.countEven(4) << std::endl;
    std::cout << s1.countEven(30) << std::endl;

    return 0;
}