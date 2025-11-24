#include <iostream>
#include <string>

class Solution
{
public:
    int firstUniqChar(std::string s)
    {
        for (int i = 0; i < s.size(); ++i)
        {
            if (s.find(s[i]) == s.rfind(s[i]))
            {
                return i;
            }
        }

        return -1;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.firstUniqChar("leetcode") << std::endl;
    std::cout << s1.firstUniqChar("loveleetcode") << std::endl;
    std::cout << s1.firstUniqChar("aabb") << std::endl;

    return 0;
}