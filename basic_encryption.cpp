#include <string>
#include <cassert>
#include <unordered_map>
#include <iostream>

std::string encrypt(std::string text, int rule)
{
    if (text.empty() || rule == 0)
    {
        return text;
    }

    std::string result;

    for (char c : text)
    {
        char chr = c + rule;
        result += chr;
    }

    return result;
};

int main()
{
    assert(encrypt("", 1) == (""));
    assert(encrypt("a", 1) == ("b"));
    assert(encrypt("please encrypt me", 2) == ("rngcug\"gpet{rv\"og"));
    std::cout << "all tests passed!" << std::endl;
}