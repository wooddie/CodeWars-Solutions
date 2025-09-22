#include <iostream>
#include <cassert>
#include <sstream>
#include <numeric>
typedef unsigned long long ull;

ull spinningRings(ull innerMax, ull outerMax)
{
    ull count = 0;
    ull in_max = 0;
    ull out_max = 0;

    do
    {
        in_max = (in_max == 0) ? innerMax : in_max - 1;
        out_max = (out_max + 1) % (outerMax + 1);
        count++;
    } while (in_max != out_max);


    return count;
}

void dotest(ull i, ull o, ull expected)
{
    std::stringstream ss;
    ss << "Test failed with innerMax = " << i << ", outerMax = " << o << std::endl;
    assert(spinningRings(i, o) == (expected));
}

int main()
{
    dotest(2, 2, 3);
    dotest(5, 5, 3);
    dotest(2, 10, 13);
    dotest(10, 2, 10);
    dotest(7, 9, 4);
    dotest(1, 1, 1);
    dotest(16777216, 14348907, 23951671);

    std::cout << "all tests passed!" << std::endl;

    return 0;
}