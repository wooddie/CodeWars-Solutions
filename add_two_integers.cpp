#include <iostream>

class Solution
{
public:
    int sum(int num1, int num2)
    {
        return num1 + num2;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.sum(12, 5) << std::endl;
    std::cout << s1.sum(-10, 4) << std::endl;

    return 0;
}