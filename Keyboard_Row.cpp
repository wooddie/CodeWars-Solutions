#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

class Solution
{
public:
    bool checkAllLetters(const std::string &str, const std::unordered_map<char, int> &mp)
    {
        if (str.empty())
            return false;

        int row = mp.at(std::tolower(str[0]));

        for (char c : str)
        {
            if (mp.at(std::tolower(c)) != row)
                return false;
        }

        return true;
    }
    std::vector<std::string> findWords(std::vector<std::string> &words)
    {
        std::unordered_map<char, int> mp;
        std::string r1 = "qwertyuiop";
        std::string r2 = "asdfghjkl";
        std::string r3 = "zxcvbnm";

        for (char c : r1)
            mp[c] = 1;
        for (char c : r2)
            mp[c] = 2;
        for (char c : r3)
            mp[c] = 3;

        std::vector<std::string> result;
        for (const auto &w : words)
            if (checkAllLetters(w, mp))
                result.push_back(w);

        return result;
    }
};

int main()
{
    Solution s1;

    std::vector<std::string> v = {"Hello", "Alaska", "Dad", "Peace"};
    for (const auto &s : s1.findWords(v))
    {
        std::cout << s;
    }
    std::cout << std::endl;

    v = {"omk"};
    for (const auto &s : s1.findWords(v))
    {
        std::cout << s;
    }
    std::cout << std::endl;

    v = {"adsdf", "sfd"};
    for (const auto &s : s1.findWords(v))
    {
        std::cout << s;
    }
    std::cout << std::endl;

    return 0;
}