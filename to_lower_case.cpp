#include <iostream>
#include <string>

class Solution
{
public:
    std::string toLowerCase(std::string s)
    {
        std::string result;
        for(char c : s)
        {
            if(isupper(c))
            {
                result += c + 32;
            }
            else
            {
                result += c;
            }
        }

        return result;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.toLowerCase("Hello") << std::endl;
    std::cout << s1.toLowerCase("here") << std::endl;
    std::cout << s1.toLowerCase("LOVELY") << std::endl;

    return 0;
}