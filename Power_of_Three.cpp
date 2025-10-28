#include <iostream>

class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        return n > 0 && 1162261467 % n == 0;
    }
};

int main()
{
    Solution s1;

    std::cout << std::boolalpha << s1.isPowerOfThree(27) << std::endl;
    std::cout << std::boolalpha << s1.isPowerOfThree(0) << std::endl;
    std::cout << std::boolalpha << s1.isPowerOfThree(-1) << std::endl;

    return 0;
}