#include <iostream>
#include <string>
#include <cassert>
#include <algorithm>

std::string shorter_reverse_longer(const std::string &a, const std::string &b)
{
    std::string result;
    if (a.length() >= b.length())
    {
        std::string copy_a = a;
        std::reverse(copy_a.begin(), copy_a.end());
        result += b + copy_a + b;
    }
    else
    {
        std::string copy_b = b;
        std::reverse(copy_b.begin(), copy_b.end());
        result += a + copy_b + a;
    }
    return result;
}

int main()
{
    assert(shorter_reverse_longer("first", "abcde") == ("abcdetsrifabcde"));
    assert(shorter_reverse_longer("hello", "bau") == ("bauollehbau"));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}