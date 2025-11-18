#include <iostream>
#include <string>
#include <sstream>

class Solution
{
public:
    bool isPalindrome(std::string s)
    {
        std::string str;

        for (auto &c : s)
        {
            if (std::isalnum(c))
            {
                str += std::tolower(c);
            }
        }

        std::string reversed = str;
        std::reverse(reversed.begin(), reversed.end());

        return (reversed == str);
    }
};

int main()
{
    Solution s1;

    std::cout << std::boolalpha << s1.isPalindrome("A man, a plan, a canal: Panama") << std::endl;
    std::cout << std::boolalpha << s1.isPalindrome("race a car") << std::endl;
    std::cout << std::boolalpha << s1.isPalindrome(" ") << std::endl;

    return 0;
}