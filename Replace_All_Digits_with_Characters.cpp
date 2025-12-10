#include <iostream>
#include <string>

class Solution
{
public:
    std::string replaceDigits(std::string s)
    {
        std::string res;

        for (char &c : s)
        {
            char lastDigit;

            if (isdigit(c))
            {
                int n = c - '0';
                char next = lastDigit + n;
                res += next;
            }
            else
            {
                lastDigit = c;
                res += c;
            }
        }

        return res;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.replaceDigits("a1c1e1") << std::endl;
    std::cout << s1.replaceDigits("a1b2c3d4e") << std::endl;

    return 0;
}