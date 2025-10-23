#include <iostream>
#include <cassert>

bool ran_expected;
void Expected() { ran_expected = true; }
void Unexpected() { ran_expected = false; }

void SetUp()
{
    ran_expected = false;
}

void _if(bool value, std::function<void(void)> func1, std::function<void(void)> func2)
{
    if (value)
    {
        func1();
    }
    else
    {
        func2();
    }
}

int main()
{
    _if(true, Expected, Unexpected);
    assert(ran_expected == (true));

    _if(false, Unexpected, Expected);
    assert(ran_expected == (true));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}