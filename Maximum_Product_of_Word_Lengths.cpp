#include <iostream>
#include <vector>
#include <string>

class Solution
{
public:
    int getMask(const std::string &word)
    {
        int mask = 0;
        for (char c : word)
        {
            mask |= 1 << (c - 'a');
        }
        return mask;
    }
    int maxProduct(std::vector<std::string> &words)
    {
        std::vector<int> masks(words.size());
        for (int i = 0; i < words.size(); ++i)
            masks[i] = getMask(words[i]);

        int maxProduct = 0;
        for (int i = 0; i < words.size(); ++i)
        {
            for (int j = i + 1; j < words.size(); ++j)
            {
                if ((masks[i] & masks[j]) == 0)
                {
                    maxProduct = std::max(maxProduct,
                                          (int)(words[i].size() * words[j].size()));
                }
            }
        }
        return maxProduct;
    }
};

int main()
{
    Solution s1;

    std::vector<std::string> v = {"abcw", "baz", "foo", "bar", "xtfn", "abcdef"};
    std::cout << s1.maxProduct(v) << std::endl;
    v = {"a", "ab", "abc", "d", "cd", "bcd", "abcd"};
    std::cout << s1.maxProduct(v) << std::endl;
    v = {"a", "aa", "aaa", "aaaa"};
    std::cout << s1.maxProduct(v) << std::endl;

    return 0;
}