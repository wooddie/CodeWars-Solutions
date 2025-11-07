#include <iostream>
#include <string>
#include <unordered_map>

class Solution
{
public:
    char findTheDifference(std::string s, std::string t)
    {
        std::unordered_map<char, int> list1;
        std::unordered_map<char, int> list2;

        for (char x : s)
        {
            list1[x]++;
        }

        for (char y : t)
        {
            list2[y]++;
        }

        for (const auto &[c, countT] : list2)
        {
            int countS = 0;
            if (auto it = list1.find(c); it != list1.end())
                countS = it->second;

            if (countT > countS)
                return c;
        }

        return '\0';
    }
};

int main()
{
    Solution s1;

    std::cout << s1.findTheDifference("abcd", "abcde") << std::endl;
    std::cout << s1.findTheDifference("", "y") << std::endl;

    return 0;
}