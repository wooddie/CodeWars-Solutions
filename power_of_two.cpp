#include <iostream>

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        return ((n > 0) && ((n & (n - 1)) == 0));
    }
};

int main()
{
    Solution s1;

    std::cout << std::boolalpha << s1.isPowerOfTwo(1) << std::endl;

    std::cout << std::boolalpha << s1.isPowerOfTwo(16) << std::endl;

    std::cout << std::boolalpha << s1.isPowerOfTwo(3) << std::endl;

    return 0;
}