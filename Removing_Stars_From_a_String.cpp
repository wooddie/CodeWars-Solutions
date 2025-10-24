#include <iostream>
#include <string>
#include <ranges>

class Solution
{
public:
    std::string removeStars(std::string s)
    {
        std::string result;

        for (char c : s)
        {
            if (c == '*')
                result.pop_back();
            else
                result.push_back(c);
        }

        return result;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.removeStars("leet**cod*e") << std::endl;
    std::cout << s1.removeStars("erase*****") << std::endl;

    return 0;
}