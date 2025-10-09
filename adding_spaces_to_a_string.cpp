#include <iostream>
#include <vector>
#include <string>

class Solution
{
public:
    std::string addSpaces(std::string s, std::vector<int> &spaces)
    {
        std::string result;
        result.reserve(s.size() + spaces.size());

        int spaceIndex = 0;

        for (int i = 0; i < s.size(); ++i)
        {
            if (spaceIndex < spaces.size() && spaces[spaceIndex] == i)
            {
                result.push_back(' ');
                spaceIndex++;
            }

            result.push_back(s[i]);
        }

        return result;
    }
};

int main()
{
    Solution s1;

    std::string str = "LeetcodeHelpsMeLearn";
    std::vector<int> v = {8, 13, 15};
    std::cout << s1.addSpaces(str, v) << std::endl;

    str = "icodeinpython";
    v = {1, 5, 7, 9};
    std::cout << s1.addSpaces(str, v) << std::endl;

    str = "spacing";
    v = {0, 1, 2, 3, 4, 5, 6};
    std::cout << s1.addSpaces(str, v) << std::endl;

    return 0;
}