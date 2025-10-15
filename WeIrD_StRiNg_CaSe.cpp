#include <iostream>
#include <cassert>
#include <sstream>
#include <cctype>
#include <string>
#include <string_view>

std::string to_weird_case(std::string_view str)
{
    std::string result;
    int index = 0;

    for (char c : str)
    {
        if (c == ' ')
        {
            result += c;
            index = 0;
        }
        else
        {
            if (index % 2 == 0)
            {
                result += std::toupper(c);
            }
            else
            {
                result += std::tolower(c);
            }

            index++;
        }
    }

    return result;
}

int main()
{
    assert(to_weird_case("This is a test") == ("ThIs Is A TeSt"));

    assert(to_weird_case("") == (""));

    assert(to_weird_case("unique") == ("UnIqUe"));

    assert(to_weird_case("UPPER CASE") == ("UpPeR CaSe"));

    assert(to_weird_case("lower case") == ("LoWeR CaSe"));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}