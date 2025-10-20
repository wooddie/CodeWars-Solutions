#include <iostream>
#include <string>
#include <sstream>

class Solution
{
public:
    std::string reverseWords(std::string s)
    {
        std::reverse(s.begin(), s.end());

        int start = 0;
        for (int i = 0; i <= s.length(); ++i)
        {
            if (i == s.length())
            {
                std::reverse(s.begin() + start, s.begin() + i);
                start = i + 1;
            }
        }

        return s;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.reverseWords("the sky is blue") << std::endl;

    std::cout << s1.reverseWords("  hello world  ") << std::endl;

    std::cout << s1.reverseWords("a good   example") << std::endl;

    return 0;
}