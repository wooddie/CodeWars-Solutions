#include <cassert>
#include <iostream>
#include <vector>

int find(const std::vector<int> &vec, int n)
{
    return 0;
}

int main()
{
    assert(find({1, 2, 3}, 1)               == (1));
    assert(find({1, 2, 3}, 10)              == (0));
    assert(find({1, 2, 3}, 7)               == (2));
    assert(find({1, 2, 3}, 5)               == (3));
    assert(find({1, 1, 1}, 1)               == (3));
    assert(find({1, 1, 1}, 2)               == (6));
    assert(find({1, 1, 1}, 3)              == (10));
    assert(find({1, 1, 1}, 4)               == (0));
    assert(find({3, 6, 9, 12}, 12)          == (5));
    assert(find({1, 4, 5, 8}, 8)            == (3));
    assert(find({3, 6, 9, 12}, 15)          == (5));
    assert(find({3, 6, 9, 12, 14, 18}, 30) == (21));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}