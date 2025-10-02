#include <cmath>
#include <iostream>
#include <cassert>

int cockroach_speed(double s)
{
    return (s * (250.0 / 9));
}

int main()
{
    assert(cockroach_speed(1.08) == (30));
    assert(cockroach_speed(1.09) == (30));
    assert(cockroach_speed(0) == (0));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}