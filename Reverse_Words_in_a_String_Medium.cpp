#include <iostream>
#include <string>
#include <vector>
#include <sstream>

class Solution
{
public:
    std::string reverseWords(std::string s)
    {
        std::string result, word;
        std::vector<std::string> vec;

        std::stringstream ss(s);

        while (ss >> word)
        {
            vec.push_back(word);
        }

        for (int i = vec.size() - 1; i >= 0; --i)
        {
            result += vec[i] + ' ';
        }

        result.pop_back();

        return result;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.reverseWords("the sky is blue") << std::endl;
    std::cout << s1.reverseWords("  hello world  ") << std::endl;
    std::cout << s1.reverseWords("a good   example") << std::endl;

    return 0;
}