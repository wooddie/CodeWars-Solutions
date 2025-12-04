#include <iostream>

class Solution
{
public:
    int numberOfSteps(int num)
    {
        int count = 0;

        while (num > 0)
        {
            if (num % 2 == 0)
            {
                num /= 2;
                count++;
            }
            else
            {
                num -= 1;
                count++;
            }
        }

        return count;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.numberOfSteps(14) << std::endl;
    std::cout << s1.numberOfSteps(8) << std::endl;
    std::cout << s1.numberOfSteps(123) << std::endl;

    return 0;
}