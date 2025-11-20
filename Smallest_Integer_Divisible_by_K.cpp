#include <iostream>

class Solution
{
public:
    int smallestRepunitDivByK(int k)
    {
        int rem = 1 % k;
        int length = 1;

        while (rem != 0)
        {
            rem = (rem * 10 + 1) % k;
            length++;

            if (length > k)
            {
                return -1;
            }
        }

        return length;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.smallestRepunitDivByK(1) << std::endl;
    std::cout << s1.smallestRepunitDivByK(2) << std::endl;
    std::cout << s1.smallestRepunitDivByK(3) << std::endl;

    return 0;
}