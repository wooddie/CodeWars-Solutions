#include <iostream>

class Solution
{
public:
    int arrangeCoins(int n)
    {
        int count = 1;
        while (true)
        {
            if (n >= count)
            {
                n = n - count;
                count++;
            }
            else
            {
                break;
            }
        }

        return count - 1;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.arrangeCoins(5) << std::endl;
    std::cout << s1.arrangeCoins(8) << std::endl;

    return 0;
}