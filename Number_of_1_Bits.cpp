#include <iostream>
#include <bitset>

class Solution
{
public:
    int hammingWeight(int n)
    {
        std::bitset<32> set(n);

        return set.count();
    }
};

int main()
{
    Solution s1;

    std::cout << s1.hammingWeight(11) << std::endl;
    std::cout << s1.hammingWeight(128) << std::endl;
    std::cout << s1.hammingWeight(2147483645) << std::endl;

    return 0;
}