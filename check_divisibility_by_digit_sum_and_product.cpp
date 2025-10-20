#include <iostream>

class Solution
{
public:
    bool checkDivisibility(int n)
    {
        int sum = 0;
        int product = 1;
        int original = n;

        while (n > 0)
        {
            int digit = n % 10;
            n /= 10;

            sum += digit;
            product *= digit;
        }

        int total = sum + product;

        return (total != 0 && original % total == 0);
    }
};

int main()
{
    Solution s1;

    std::cout << std::boolalpha << s1.checkDivisibility(99) << std::endl;

    std::cout << std::boolalpha << s1.checkDivisibility(23) << std::endl;

    return 0;
}