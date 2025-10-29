#include <iostream>
#include <string>

class Solution
{
public:
    int minAddToMakeValid(std::string s)
    {
        int count = 0;
        int needed = 0;

        for (char c : s)
        {
            if (c == '(')
            {
                count++;
            }
            else if (c == ')')
            {
                if (count > 0)
                {
                    count--;
                }
                else
                {
                    needed++;
                }
            }
        }

        return (count > 0) ? needed + count : needed;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.minAddToMakeValid("())") << std::endl;
    std::cout << s1.minAddToMakeValid("(((") << std::endl;

    return 0;
}