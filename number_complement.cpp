#include <iostream>

class Solution
{
public:
    int findComplement(int num)
    {
        std::bitset<32> initialSet(num);
        std::string binaryString = initialSet.to_string();
        std::string rep;

        size_t firstOne = binaryString.find('1');

        if (firstOne != std::string::npos)
        {
            binaryString = binaryString.substr(firstOne);
        }
        else
        {
            binaryString = "0";
        }

        for (char c : binaryString)
        {
            if (c == '1')
            {
                rep += '0';
            }
            else
            {
                rep += '1';
            }
        }

        unsigned long result = std::stoul(rep, nullptr, 2);

        return result;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.findComplement(5) << std::endl;
    std::cout << s1.findComplement(1) << std::endl;

    return 0;
}