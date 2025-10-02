#include <vector>
#include <iostream>
#include <cassert>
#include <string>

std::string double_char(const std::string &str)
{
    std::string result;

    for (char c : str)
    {
        result.push_back(c);
        result.push_back(c);
    }

    return result;
}

int main()
{
    assert(double_char("Z") == ("ZZ") && (R"(Incorrect output for double_char("Z"):)"));

    assert(double_char("Zz") == ("ZZzz") && (R"(Incorrect output for double_char("Zz"):)"));
    assert(double_char("  ") == ("    ") && (R"(Incorrect output for double_char("  "):)"));

    assert(double_char("String") == ("SSttrriinngg") && (R"(Incorrect output for double_char("String"):)"));
    assert(double_char("1234!_ ") == ("11223344!!__  ") && (R"(Incorrect output for double_char("1234!_ "):)"));
    assert(double_char("Hello World") == ("HHeelllloo  WWoorrlldd") && (R"(Incorrect output for double_char("Hello World"):)"));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}