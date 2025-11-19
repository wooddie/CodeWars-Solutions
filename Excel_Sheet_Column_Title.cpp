#include <iostream>
#include <string>

class Solution
{
public:
    std::string convertToTitle(int columnNumber)
    {
        std::string result;

        while (columnNumber > 0)
        {
            columnNumber -= 1;
            char letter = (columnNumber % 26) + 'A';
            result = letter + result;
            columnNumber /= 26;
        }

        return result;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.convertToTitle(1) << std::endl;
    std::cout << s1.convertToTitle(28) << std::endl;
    std::cout << s1.convertToTitle(701) << std::endl;

    return 0;
}