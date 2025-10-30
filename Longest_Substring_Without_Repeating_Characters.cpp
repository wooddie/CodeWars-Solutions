#include <iostream>
#include <string>
#include <unordered_set>

class Solution
{
public:
    int lengthOfLongestSubstring(std::string s)
    {
        std::unordered_set<char> seen;
        int left = 0;
        int maxLen = 0;

        for (int right = 0; right < s.size(); ++right)
        {
            while (seen.count(s[right]))
            {
                seen.erase(s[left]);
                left++;
            }

            seen.insert(s[right]);
            maxLen = std::max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.lengthOfLongestSubstring("abcabcbb") << std::endl;
    std::cout << s1.lengthOfLongestSubstring("bbbbb") << std::endl;
    std::cout << s1.lengthOfLongestSubstring("pwwkew") << std::endl;

    return 0;
}