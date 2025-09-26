#include <string>
#include <iostream>
#include <cassert>
#include <unordered_set>

bool hasUniqueChars(std::string s)
{
    std::unordered_set<char> set;

    for (char c : s)
    {
        if (!set.insert(c).second)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    assert(hasUniqueChars("  nAa") == (false));
    assert(hasUniqueChars("abcdef") == (true));
    assert(hasUniqueChars("++-") == (false));
    assert(hasUniqueChars(" nAa ") == (false));
    assert(hasUniqueChars("") == (true));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}