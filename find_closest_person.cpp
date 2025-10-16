#include <iostream>

class Solution
{
public:
    int findClosest(int x, int y, int z)
    {
        auto d = abs(y - z) - abs(x - z);
        return ((d > 0) * 1) + ((d < 0) * 2);
    }
};

int main()
{
    Solution s1;

    std::cout << s1.findClosest(2, 7, 4) << std::endl;
    std::cout << s1.findClosest(2, 5, 6) << std::endl;
    std::cout << s1.findClosest(1, 5, 3) << std::endl;

    return 0;
}