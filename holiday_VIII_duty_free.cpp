#include <iostream>
#include <cassert>

int duty_free(int price, int discount, int holiday_cost)
{
    return holiday_cost / ((price * discount) / 100.0);
}

int main()
{
    assert(duty_free(12, 50, 1000) == (166));
    assert(duty_free(17, 10, 500) == (294));
    assert(duty_free(24, 35, 3000) == (357));
    assert(duty_free(1400, 35, 10000) == (20));
    assert(duty_free(700, 26, 7000) == (38));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}