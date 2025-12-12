#include <iostream>
#include <string>

class Solution
{
public:
    std::string removeOccurrences(std::string s, std::string part)
    {

        while ((s.find(part)) != std::string::npos)
        {
            size_t pos = s.find(part);
            s.erase(pos, part.length());
        }

        return s;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.removeOccurrences("daabcbaabcbc", "abc") << std::endl;
    std::cout << s1.removeOccurrences("axxxxyyyyb", "xy") << std::endl;

    return 0;
}