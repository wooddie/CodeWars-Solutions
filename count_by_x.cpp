#include <iostream>
#include <cassert>
#include <vector>

std::vector<int> countBy(int x, int n)
{
    std::vector<int> result;
    int num = 0;

    for (int i = 0; i < n; ++i)
    {
        num +=x ;
        result.push_back(num);
    }

    return result;
}

int main()
{
    std::vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    assert(countBy(1, 10) == (expected));
    expected = {2, 4, 6, 8, 10};
    assert(countBy(2, 5) == (expected));
    expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    assert(countBy(1, 10) == (expected));
    expected = {100, 200, 300, 400, 500};
    assert(countBy(100, 5) == (expected));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}