#include <iostream>
#include <cassert>

int quarter_of(int month)
{
    if (month <= 3)
        return 1;
    else if (month >= 4 && month <= 6)
        return 2;
    else if (month >= 7 && month <= 9)
        return 3;
    else
        return 4;

    return 0;
}

int main()
{
    assert(quarter_of(1) == (1));
    assert(quarter_of(3) == (1));
    assert(quarter_of(5) == (2));
    assert(quarter_of(7) == (3));
    assert(quarter_of(9) == (3));
    assert(quarter_of(11) == (4));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}