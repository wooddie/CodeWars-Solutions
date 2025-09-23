#include <iostream>
#include <string>
#include <sstream>

class Solution
{
public:
    int lengthOfLastWord(std::string s)
    {
        std::stringstream ss(s);
        std::string word;
        std::string last_word;

        while (ss >> word)
        {
            last_word = word;
        }

        return last_word.size();
    }
};

int main()
{
    Solution s1;
    std::cout << s1.lengthOfLastWord("Hello World") << std::endl;
    std::cout << s1.lengthOfLastWord("   fly me   to   the moon  ") << std::endl;
    std::cout << s1.lengthOfLastWord("luffy is still joyboy") << std::endl;

    return 0;
}