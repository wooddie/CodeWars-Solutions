#include <vector>
#include <iostream>
#include <cassert>

int maxProduct(std::vector<int> numbers, int sub_size)
{
    std::sort(numbers.begin(), numbers.end(), std::greater<int>());
    int result = 1;

    for (int i = 0; i < sub_size; ++i)
    {
        result *= numbers[i];
    }

    return result;
}

int main()
{
    assert(maxProduct({4, 3, 5}, 2) == (20));
    assert(maxProduct({10, 8, 7, 9}, 3) == (720));
    assert(maxProduct({8, 6, 4, 6}, 3) == (288));

    assert(maxProduct({10, 2, 3, 8, 1, 10, 4}, 5) == (9600));
    assert(maxProduct({13, 12, -27, -302, 25, 37, 133, 155, -14}, 5) == (247895375));

    assert(maxProduct({-4, -27, -15, -6, -1}, 2) == (4));
    assert(maxProduct({-17, -8, -102, -309}, 2) == (136));

    assert(maxProduct({10, 3, -27, -1}, 3) == (-30));
    assert(maxProduct({14, 29, -28, 39, -16, -48}, 4) == (-253344));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}