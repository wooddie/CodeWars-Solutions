#include <iostream>
#include <unordered_map>

class Solution
{
public:
    bool isAnagram(std::string s, std::string t)
    {
        if (s.size() != t.size())
        {
            return false;
        }

        std::unordered_map<char, int> sList;
        std::unordered_map<char, int> tList;

        for (const auto &a : s)
        {
            sList[a]++;
        }

        for (const auto &a : t)
        {
            tList[a]++;
        }

        for (const auto &[key, value] : sList)
        {
            if (sList[key] != tList[key])
            {
                return false;
            }
        }

        return true;
    }
};

int main()
{
    Solution s1;

    std::cout << std::boolalpha << s1.isAnagram("anagram", "nagaram") << std::endl;
    std::cout << std::boolalpha << s1.isAnagram("rat", "car") << std::endl;

    return 0;
}