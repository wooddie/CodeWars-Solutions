#include <iostream>

class Solution
{
public:
    int smallestEvenMultiple(int n)
    {
        return (n % 2 == 0) ? n : n * 2;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.smallestEvenMultiple(5) << std::endl;
    std::cout << s1.smallestEvenMultiple(6) << std::endl;

    return 0;
}