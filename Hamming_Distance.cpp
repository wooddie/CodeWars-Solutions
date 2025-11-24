#include <iostream>
#include <string>
#include <bitset>

class Solution
{
public:
    int hammingDistance(int x, int y)
    {
        int count = 0;
        std::string bit1 = std::bitset<8>(x).to_string();
        std::string bit2 = std::bitset<8>(y).to_string();

        for (size_t i = 0; i < bit1.size(); ++i)
        {
            if (bit1[i] != bit2[i])
            {
                count++;
            }
        }

        return count;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.hammingDistance(1, 4) << std::endl;
    std::cout << s1.hammingDistance(3, 1) << std::endl;

    return 0;
}