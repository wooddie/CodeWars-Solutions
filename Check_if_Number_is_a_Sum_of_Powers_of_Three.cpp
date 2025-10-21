#include <iostream>

class Solution
{
public:
    bool checkPowersOfThree(int n)
    {
        while (n > 0)
        {
            if (n % 3 == 2)
                return false;
            n /= 3;
        }

        return true;
    }
};

int main()
{
    Solution s1;

    std::cout << std::boolalpha << s1.checkPowersOfThree(12) << std::endl;
    std::cout << std::boolalpha << s1.checkPowersOfThree(91) << std::endl;
    std::cout << std::boolalpha << s1.checkPowersOfThree(21) << std::endl;

    return 0;
}