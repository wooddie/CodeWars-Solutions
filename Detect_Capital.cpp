#include <iostream>
#include <string>
#include <cctype>

class Solution
{
public:
    bool AllCapitals(std::string str)
    {
        for (char c : str)
        {
            int a = c;
            if (a < 65 || a > 90)
            {
                return false;
            }
        }
        return true;
    }

    bool AllNotCapitals(std::string str)
    {
        for (char c : str)
        {
            int a = c;
            if (a < 97 || a > 122)
            {
                return false;
            }
        }
        return true;
    }

    bool firstLetterIsCapital(std::string str)
    {
        if (isupper(str[0]))
        {
            for (int i = 1; i < str.size(); ++i)
            {
                if (!islower(str[i]))
                {
                    return false;
                }
            }
        }
        else
        {
            return false;
        }

        return true;
    }

    bool detectCapitalUse(std::string word)
    {
        if (AllCapitals(word))
        {
            return true;
        }
        else if (AllNotCapitals(word))
        {
            return true;
        }
        else if (firstLetterIsCapital(word))
        {
            return true;
        }

        return false;
    }
};

int main()
{
    Solution s1;

    std::cout << std::boolalpha << s1.detectCapitalUse("USA") << std::endl;
    std::cout << std::boolalpha << s1.detectCapitalUse("FlaG") << std::endl;

    return 0;
}