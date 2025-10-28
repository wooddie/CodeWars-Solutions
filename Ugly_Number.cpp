#include <iostream>

class Solution
{
public:
    bool isUgly(int n)
    {
        if (n <= 0)
        {
            return false;
        }

        while (n > 1)
        {
            if (n % 2 == 0)
            {
                n /= 2;
            }
            else if (n % 3 == 0)
            {
                n /= 3;
            }
            else if (n % 5 == 0)
            {
                n /= 5;
            }
            else
            {
                return false;
            }
        }

        return true;
    }
};

int main()
{
    Solution s1;

    std::cout << std::boolalpha << s1.isUgly(6) << std::endl;
    std::cout << std::boolalpha << s1.isUgly(1) << std::endl;
    std::cout << std::boolalpha << s1.isUgly(14) << std::endl;

    return 0;
}