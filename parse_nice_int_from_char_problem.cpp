#include <string>
#include <iostream>
#include <cassert>

int get_age(const std::string &she_said)
{
    return std::stoi(she_said);
}

int main()
{
    assert(get_age("5 years old") == (5));
    assert(get_age("9 years old") == (9));
    assert(get_age("1 year old") == (1));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}