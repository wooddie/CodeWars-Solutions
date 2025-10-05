#include <iostream>
#include <cassert>

bool IsLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        return true;
    }

    return false;
}

int main()
{
    assert(IsLeapYear(2020) == (true));
    assert(IsLeapYear(2000) == (true));
    assert(IsLeapYear(2015) == (false));
    assert(IsLeapYear(2100) == (false));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}