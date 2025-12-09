#include <iostream>
#include <string>
#include <vector>

class Solution
{
public:
    std::vector<std::string> commonChars(std::vector<std::string> &words)
    {
        std::vector<std::string> res;

        int freq[26] = {0};
        for (char c : words[0])
            freq[c - 'a']++;

        for (int i = 0; i < 26; ++i)
        {
            if (freq[i] == 0)
                continue;

            char c = 'a' + i;

            int min_count = freq[i];
            for (int j = 1; j < words.size(); ++j)
            {
                int count_in_word = 0;
                for (char ch : words[j])
                {
                    if (ch == c)
                        count_in_word++;
                }
                min_count = std::min(min_count, count_in_word);
            }

            for (int k = 0; k < min_count; ++k)
                res.push_back(std::string(1, c));
        }

        return res;
    }
};

int main()
{
    Solution s1;

    std::vector<std::string> v = {"bella", "label", "roller"};
    for (const auto &s : s1.commonChars(v))
    {
        std::cout << s << " ";
    }
    std::cout << std::endl;

    v = {"cool", "lock", "cook"};
    for (const auto &s : s1.commonChars(v))
    {
        std::cout << s << " ";
    }
    std::cout << std::endl;

    return 0;
}