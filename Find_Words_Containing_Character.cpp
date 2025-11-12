#include <iostream>
#include <vector>
#include <string>

class Solution
{
public:
    std::vector<int> findWordsContaining(std::vector<std::string> &words, char x)
    {
        std::vector<int> result;

        for (size_t i = 0; i < words.size(); ++i)
        {
            size_t pos = words[i].find(x);

            if (pos != std::string::npos)
            {
                result.push_back(i);
            }
        }

        return result;
    }
};

int main()
{
    Solution s1;

    std::vector<std::string> v = {"leet", "code"};
    for (const auto &a : s1.findWordsContaining(v, 'e'))
    {
        std::cout << a;
    }
    std::cout << std::endl;

    v = {"abc", "bcd", "aaaa", "cbc"};
    for (const auto &a : s1.findWordsContaining(v, 'a'))
    {
        std::cout << a;
    }
    std::cout << std::endl;

    v = {"abc", "bcd", "aaaa", "cbc"};
    for (const auto &a : s1.findWordsContaining(v, 'z'))
    {
        std::cout << a;
    }
    std::cout << std::endl;

    return 0;
}