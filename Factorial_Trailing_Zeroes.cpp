#include <iostream>

class Solution
{
public:
    int trailingZeroes(int n)
    {
        int count = 0;
        int d = 5;

        while (n / d > 0)
        {
            count += n / d;
            d *= 5;
        }

        return count;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.trailingZeroes(3) << std::endl;
    std::cout << s1.trailingZeroes(5) << std::endl;
    std::cout << s1.trailingZeroes(0) << std::endl;
    std::cout << s1.trailingZeroes(6) << std::endl;

    return 0;
}