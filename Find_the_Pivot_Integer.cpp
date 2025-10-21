#include <iostream>
#include <cmath>

class Solution
{
public:
    int pivotInteger(int n)
    {
        long long t = ((n * n) + n) / 2;
        long long k = sqrt(t);

        return (k * k == t) ? k : -1;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.pivotInteger(8) << std::endl;
    std::cout << s1.pivotInteger(1) << std::endl;
    std::cout << s1.pivotInteger(4) << std::endl;

    return 0;
}