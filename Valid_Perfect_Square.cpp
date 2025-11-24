#include <iostream>

class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        double sqr = pow(num, 0.5);

        return (sqr == round(sqr) && sqr * sqr == num) ? true : false;
    }
};

int main()
{
    Solution s1;

    std::cout << std::boolalpha << s1.isPerfectSquare(16) << std::endl;
    std::cout << std::boolalpha << s1.isPerfectSquare(14) << std::endl;

    return 0;
}