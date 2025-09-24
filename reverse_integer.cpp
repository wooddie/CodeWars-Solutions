#include <iostream>

class Solution
{
public:
    int reverse(int x)
    {
        long long result = 0;

        while (x != 0)
        {
            int temp = x % 10;
            result = result * 10 + temp;
            x /= 10;

            if (result > INT_MAX || result < INT_MIN)
            {
                return 0;
            }
        }
        return static_cast<int>(result);
    }
};

int main()
{
    Solution s1;
    std::cout << s1.reverse(123) << std::endl;
    std::cout << s1.reverse(-123) << std::endl;
    std::cout << s1.reverse(120) << std::endl;
    std::cout << s1.reverse(1534236469) << std::endl;

    return 0;
}