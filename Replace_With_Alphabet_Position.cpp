#include <iostream>
#include <cassert>
#include <sstream>
#include <string>

std::string alphabet_position(const std::string &text)
{
    std::string result;
    std::string word;
    std::stringstream ss(text);

    while (ss >> word)
    {
        for (const char &c : word)
        {
            if (std::isalpha((unsigned char)c))
            {
                char ch = std::tolower((unsigned char)c);
                result += std::to_string(ch - 'a' + 1) + " ";
            }
        }
    }

    if (!result.empty())
    {
        result.pop_back();
    }

    return result;
}

int main()
{
    assert(alphabet_position("The sunset sets at twelve o' clock.") == ("20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5 15 3 12 15 3 11"));
    assert(alphabet_position("The narwhal bacons at midnight.") == ("20 8 5 14 1 18 23 8 1 12 2 1 3 15 14 19 1 20 13 9 4 14 9 7 8 20"));
    assert(alphabet_position("0123456789") == (""));
    assert(alphabet_position(",./<>?-_=+ ") == (""));
    assert(alphabet_position("") == (""));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}