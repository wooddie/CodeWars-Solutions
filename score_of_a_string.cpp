#include <iostream>
#include <string>
#include <cmath>

class Solution
{
public:
    int scoreOfString(std::string s)
    {
        int sum = 0;

        for (size_t i = 0; i + 1 < s.size(); ++i)
        {
            sum += std::abs(s[i] - s[i + 1]);
        }

        return sum;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.scoreOfString("hello") << std::endl;
    std::cout << s1.scoreOfString("zaz") << std::endl;

    return 0;
}