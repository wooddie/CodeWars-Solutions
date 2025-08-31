#include <string>
#include <cassert>
#include <iostream>
#include <sstream>

bool is_uppercase(const std::string &s)
{
    std::stringstream ss(s);
    std::string str;

    while (ss >> str)
    {
        for (char c : str)
        {
            if (islower(c))
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{

    assert(is_uppercase("c") == (false));
    assert(is_uppercase("C") == (true));
    std::cout << std::boolalpha << is_uppercase("hello I AM DONALD") << std::endl;
    assert(is_uppercase("hello I AM DONALD") == (false));
    assert(is_uppercase("HELLO I AM DONALD") == (true));
    assert(is_uppercase("ACSKLDFJSgSKLDFJSKLDFJ") == (false));
    assert(is_uppercase("ACSKLDFJSGSKLDFJSKLDFJ") == (true));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}