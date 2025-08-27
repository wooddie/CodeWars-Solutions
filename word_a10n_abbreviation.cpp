#include <string>
#include <cassert>
#include <iostream>
#include <cctype>

std::string abbreviate(std::string sentence)
{
    std::string result;
    std::string word;

    for (char c : sentence)
    {
        if (isalpha(c))
        {
            word += c;
        }
        else
        {
            if (!word.empty())
            {
                if (word.size() < 4)
                {
                    result += word;
                }
                else
                {
                    result += std::string(1, word.front());
                    result += std::to_string(word.size() - 2);
                    result += std::string(1, word.back());
                }
                word.clear();
            }
            result += c;
        }
    }

    if (!word.empty())
    {
        if (word.size() < 4)
        {
            result += word;
        }
        else
        {
            result += std::string(1, word.front());
            result += std::to_string(word.size() - 2);
            result += std::string(1, word.back());
        }
        word.clear();
    }

    return result;
}

int main()
{
    assert(abbreviate("internationalization") == ("i18n"));
    assert(abbreviate("accessibility") == ("a11y"));
    assert(abbreviate("Accessibility") == ("A11y"));
    assert(abbreviate("elephant-ride") == ("e6t-r2e"));
    std::cout << "all tests passed!" << std::endl;

    return 0;
}