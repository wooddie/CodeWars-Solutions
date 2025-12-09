#include <iostream>
#include <string>

class Solution
{
public:
    int maxLengthBetweenEqualCharacters(std::string s)
    {
        int maxDist = -1;

        for (int i = 0; i < s.size(); ++i)
        {
            for (int j = s.size() - 1; j > i; --j)
            {
                if (s[i] == s[j])
                {
                    maxDist = std::max(maxDist, j - i - 1);
                }
            }
        }

        return maxDist;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.maxLengthBetweenEqualCharacters("aa") << std::endl;
    std::cout << s1.maxLengthBetweenEqualCharacters("abca") << std::endl;
    std::cout << s1.maxLengthBetweenEqualCharacters("cbzxy") << std::endl;

    return 0;
}