#include <iostream>
#include <vector>
#include <string>

class Solution
{
public:
    int countCharacters(std::vector<std::string> &words, std::string chars)
    {
        std::vector<int> freqChars(26, 0);
        for (char c : chars)
        {
            freqChars[c - 'a']++;
        }

        int res = 0;

        for (const std::string &word : words)
        {
            std::vector<int> freqWord(26, 0);

            for (char c : word)
            {
                freqWord[c - 'a']++;
            }

            bool good = true;
            for (int i = 0; i < 26; i++)
            {
                if (freqWord[i] > freqChars[i])
                {
                    good = false;
                    break;
                }
            }

            if (good)
            {
                res += word.size();
            }
        }

        return res;
    }
};

int main()
{
    Solution s1;

    std::vector<std::string> v = {"cat", "bt", "hat", "tree"};
    std::cout << s1.countCharacters(v, "atach") << std::endl;

    v = {"hello", "world", "leetcode"};
    std::cout << s1.countCharacters(v, "welldonehoneyr") << std::endl;

    return 0;
}