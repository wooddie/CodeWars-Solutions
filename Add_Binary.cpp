#include <iostream>
#include <vector>

class Solution
{
public:
    std::string addBinary(std::string a, std::string b)
    {
        std::string res;
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry)
        {
            int bitA = (i >= 0) ? a[i] - '0' : 0;
            int bitB = (j >= 0) ? b[j] - '0' : 0;

            int sum = bitA + bitB + carry;

            int digit = sum % 2;
            carry = sum / 2;

            res += std::to_string(digit);

            i = i - 1;
            j = j - 1;
        }

        std::reverse(res.begin(), res.end());
        
        return res;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.addBinary("11", "1") << std::endl;
    std::cout << s1.addBinary("1010", "1011") << std::endl;

    return 0;
}