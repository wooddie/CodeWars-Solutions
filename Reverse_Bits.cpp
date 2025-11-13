#include <iostream>
#include <bitset>

class Solution
{
public:
    int reverseBits(int n)
    {
        std::bitset<32> bit(n);
        std::string str = bit.to_string();
        std::reverse(str.begin(), str.end());
        
        return std::stoi(str, nullptr, 2);
    }
};

int main()
{
    Solution s1;

    std::cout << s1.reverseBits(43261596) << std::endl;
    std::cout << s1.reverseBits(2147483644) << std::endl;

    return 0;
}