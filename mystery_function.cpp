#include <iostream>
#include <cassert>
typedef unsigned long ulong;

ulong mystery(ulong n)
{
    return n;
}

ulong mysteryInv(ulong n)
{
    return n;
}

std::string nameOfMystery()
{
    return "";
}

int main()
{
    // * (Testing_Mystery_On_6)

    assert(mystery(6) == (5));

    // * (Testing_MysteryInv_On_5)

    assert(mysteryInv(5) == (6));

    // * (Testing_Mystery_On_9)

    assert(mystery(9) == (13));

    // * (Testing_MysteryInv_On_13)

    assert(mysteryInv(13) == (9));

    // * (Testing_Mystery_On_19)

    assert(mystery(19) == (26));

    // * (Testing_MysteryInv_On_26)

    assert(mysteryInv(26) == (19));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}