#include <iostream>

class Solution
{
public:
    double myPow(double x, int n)
    {
        return pow(x, n);
    }
};

int main()
{
    Solution s1;

    std::cout << s1.myPow(2.00000, 10) << std::endl;
    std::cout << s1.myPow(2.10000, 3) << std::endl;
    std::cout << s1.myPow(2.00000, -2) << std::endl;

    return 0;
}