#include <iostream>
#include <string>

class Solution
{
public:
    std::string addStrings(std::string num1, std::string num2)
    {
        std::string res;

        int i = num1.length() - 1, j = num2.length() - 1, carry = 0;

        while (i >= 0 || j >= 0 || carry)
        {
            int d1 = (i >= 0) ? num1[i] - '0' : 0;
            int d2 = (j >= 0) ? num2[j] - '0' : 0;

            int sum = d1 + d2 + carry;
            carry = sum / 10;
            res += std::to_string(sum % 10);

            i--;
            j--;
        }

        std::reverse(res.begin(), res.end());

        return res;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.addStrings("11", "123") << std::endl;
    std::cout << s1.addStrings("456", "77") << std::endl;
    std::cout << s1.addStrings("0", "0") << std::endl;

    return 0;
}