#include <iostream>
#include <string>
#include <cassert>
#include <vector>

std::vector<int> reverseSeq(int n)
{
    std::vector<int> result;

    while (n > 0)
    {
        result.push_back(n);
        n--;
    }

    return result;
}

int main()
{
    assert(reverseSeq(1) == (std::vector<int>{1}));
    assert(reverseSeq(2) == (std::vector<int>{2, 1}));
    assert(reverseSeq(5) == (std::vector<int>{5, 4, 3, 2, 1}));
    assert(reverseSeq(10) == (std::vector<int>{10, 9, 8, 7, 6, 5, 4, 3, 2, 1}));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}