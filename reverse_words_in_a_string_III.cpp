#include <iostream>
#include <string>
#include <sstream>

class Solution
{
public:
    std::string reverseWords(std::string s)
    {
        std::string result;
        std::string word;
        std::stringstream ss(s);

        while (ss >> word)
        {
            std::reverse(word.begin(), word.end());

            result += word + " ";
        }
        result.erase(result.size() - 1);
        return result;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.reverseWords("Let's take LeetCode contest") << std::endl;
    std::cout << s1.reverseWords("Mr Ding") << std::endl;
}