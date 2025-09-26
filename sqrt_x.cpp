#include <iostream>

class Solution
{
public:
    int mySqrt(int x)
    {
        return sqrt(x);
    }
};

int main()
{
    Solution s1;

    std::cout << s1.mySqrt(4) <<std::endl;
    std::cout << s1.mySqrt(8) <<std::endl;

    return 0;
}