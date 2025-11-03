#include <iostream>
#include <cassert>

class Omnibool
{
public:
    bool operator==(bool) const { return true; }
};

Omnibool omnibool;


int main()
{
    assert(omnibool == true);
    assert(omnibool == false);

    std::cout << "all tests passed!" << std::endl;
    return 0;
}
