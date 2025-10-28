#include <iostream>

class Solution
{
public:
    bool judgeSquareSum(int c)
    {
        for (int i = 0; i <= sqrt(c); ++i)
        {
            int b = c - i * i;
            int root = sqrt(b);

            if (root * root == b)
            {
                return true;
            }
        }

        return false;
    }
};

int main()
{
    Solution s1;

    std::cout << std::boolalpha << s1.judgeSquareSum(5) << std::endl;
    std::cout << std::boolalpha << s1.judgeSquareSum(3) << std::endl;

    return 0;
}