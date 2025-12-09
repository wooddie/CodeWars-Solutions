#include <iostream>
#include <string>
#include <vector>

class Solution
{
public:
    std::vector<std::string> commonChars(std::vector<std::string> &words)
    {
        std::vector<std::string> res;
        char used[256] = {0};

        for (const char &c : words[0])
        {
            int min_count = INT_MAX;

            for (int i = 1; i < words.size(); ++i)
            {
                int count_in_word = 0;

                for (char ch : words[i])
                {
                    if (ch == c)
                        count_in_word++;
                }

                min_count = std::min(min_count, count_in_word);
            }

            if (min_count == 0)
            {
                continue;
            }

            int needed = min_count - used[c];

            if (needed > 0)
            {
                for (int k = 0; k < needed; ++k)
                    res.push_back(std::string(1, c));

                used[c] += needed;
            }
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