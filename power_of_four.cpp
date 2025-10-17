#include <iostream>

class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        return n > 0 && (n & (n - 1)) == 0 && (n & 0x55555555);
    }
};

int main()
{
    Solution s1;

    std::cout << std::boolalpha << s1.isPowerOfFour(16) << std::endl;

    std::cout << std::boolalpha << s1.isPowerOfFour(5) << std::endl;

    std::cout << std::boolalpha << s1.isPowerOfFour(1) << std::endl;

    return 0;
}