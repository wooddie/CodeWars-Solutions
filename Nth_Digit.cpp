#include <iostream>

class Solution
{
public:
    int findNthDigit(int n)
    {
        int len = 1;
        unsigned long long count = 9;

        while (n > len * count)
        {
            n = n - (len * count);
            len = len + 1;
            count = count * 10;
        }

        int start = pow(10, (len - 1));
        int number_index = (n - 1) / len;
        int number = start + number_index;

        int digit_index = (n - 1) % len;
        std::string numStr = std::to_string(number);
        int digit = numStr[digit_index] - '0';

        return digit;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.findNthDigit(3) << std::endl;
    std::cout << s1.findNthDigit(11) << std::endl;

    return 0;
}