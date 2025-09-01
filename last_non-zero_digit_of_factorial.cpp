#include <iostream>
#include <cassert>
#include <chrono>

int last_digit(long n)
{
    static int table[5] = {1, 1, 2, 6, 4};

    if (n < 5)
        return table[n];

    int q = n / 5;
    int r = n % 5;

    int res = last_digit(q);

    int pow2[4] = {6, 2, 4, 8};
    int mul2 = pow2[q % 4];

    return (res * table[r] * mul2) % 10;
}

int main()
{
    auto start = std::chrono::high_resolution_clock::now();

    assert(last_digit(12) == (6));
    assert(last_digit(387) == (2));
    assert(last_digit(1673) == (4));
    assert(last_digit(995) == (8));

    assert(last_digit(0) == (1));
    assert(last_digit(1) == (1));
    assert(last_digit(2) == (2));
    assert(last_digit(9999) == (8));
    assert(last_digit(10000) == (8));

    assert(last_digit(678754) == (6));
    assert(last_digit(791159) == (8));
    assert(last_digit(501507) == (4));
    assert(last_digit(993782) == (2));
    assert(last_digit(978707) == (4));

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;

    std::cout << "all tests passed!" << std::endl;
    std::cout << elapsed.count() << std::endl;

    return 0;
}
