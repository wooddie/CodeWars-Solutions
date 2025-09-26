#include <vector>
#include <iostream>
#include <string>

class Solution
{
public:
    std::string longestCommonPrefix(std::vector<std::string> &strs)
    {
        std::string prefix;

        for (int i = 0; i < strs[0].size(); ++i)
        {
            char c = strs[0][i];

            for (int j = 1; j < strs.size(); ++j)
            {
                if (i >= strs[j].size() || strs[j][i] != c)
                {
                    return prefix;
                }
            }

            prefix += c;
        }

        return prefix;
    }
};

int main()
{
    Solution s1;

    std::vector<std::string> v = {"flower", "flow", "flight"};
    std::cout << s1.longestCommonPrefix(v) << std::endl;

    v = {"dog", "racecar", "car"};
    std::cout << s1.longestCommonPrefix(v) << std::endl;

    return 0;
}