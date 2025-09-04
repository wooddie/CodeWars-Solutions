#include <iostream>
#include <cassert>

int area_or_perimeter(int l, int w)
{
    int result = 0;

    if (l == w) {
        result = l * w;
    } else {
        result = 2 * (l + w);
    }

    return result;
}

int main()
{
    assert(area_or_perimeter(4, 4) == (16));
    assert(area_or_perimeter(6, 10) == (32));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}