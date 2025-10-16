#include <iostream>

class Solution
{
public:
    int addDigits(int num)
    {
        if (num <= 9)
        {
            return num;
        }
        else
        {
            while (num > 9)
            {
                int digit = num % 10;
                num /= 10;

                num = num + digit;
            }
        }

        return num;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.addDigits(38) << std::endl;
    std::cout << s1.addDigits(10) << std::endl;

    return 0;
}