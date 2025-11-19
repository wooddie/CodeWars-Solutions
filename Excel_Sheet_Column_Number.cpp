#include <iostream>
#include <string>

class Solution
{
public:
    int titleToNumber(std::string columnTitle)
    {
        int result = 0;

        for (int i = 0; i < columnTitle.size(); ++i)
        {
            result = result * 26 + (columnTitle[i] - 'A' + 1);
        }

        return result;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.titleToNumber("A") << std::endl;
    std::cout << s1.titleToNumber("AB") << std::endl;
    std::cout << s1.titleToNumber("ZY") << std::endl;

    return 0;
}