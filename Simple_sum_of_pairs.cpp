#include <iostream>
#include <cassert>

unsigned solve(unsigned long long n)
{
    if(n < 10)
    {
        return n;
    }

    

    return 0;
}

int main()
{
    assert(solve(0) == (0));
    assert(solve(1) == (1));
    assert(solve(18) == (18));
    assert(solve(29) == (11));
    assert(solve(45) == (18));
    assert(solve(1140) == (33));
    assert(solve(7019) == (35));
    assert(solve(50000000) == (68));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}