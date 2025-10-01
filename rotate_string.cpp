#include <iostream>
#include <string>

class Solution
{
public:
    bool rotateString(std::string s, std::string goal)
    {
        if (s.size() != goal.size())
        {
            return false;
        }

        for (size_t i = 0; i < s.size(); ++i)
        {
            if (s == goal)
                return true;

            s = s.substr(1) + s[0];
        }

        return false;
    }
};

int main()
{
    Solution s1;

    std::cout << std::boolalpha << s1.rotateString("abcde", "cdeab") << std::endl;
    std::cout << std::boolalpha << s1.rotateString("abcde", "abced") << std::endl;

    return 0;
}