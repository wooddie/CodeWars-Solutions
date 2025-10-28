#include <iostream>

class Solution
{
public:
    int getSum(int a, int b)
    {
        unsigned int res = a ^ b;
        unsigned int rem = (a & b) << 1;

        if (rem == 0)
        {
            return res;
        }
        else
        {
            return getSum(res, rem);
        }

        return -1;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.getSum(1, 2) << std::endl;
    std::cout << s1.getSum(2, 3) << std::endl;

    return 0;
}