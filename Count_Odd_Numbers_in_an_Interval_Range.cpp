#include <iostream>
#include <cassert>

class Solution
{
public:
    int countOdds(int low, int high)
    {
        return (high + 1) / 2 - (low / 2);
    }
};

int main()
{
    Solution s1;

    assert(s1.countOdds(3, 7) == 3);
    assert(s1.countOdds(8, 10) == 1);

    return 0;
}