#include <iostream>
#include <cassert>
#include <vector>

std::vector<int> digits(int n)
{
    std::vector<int> result;
    std::vector<int> digit;

    while (n > 0)
    {
        int d = n % 10;
        digit.push_back(d);
        n = n / 10;
    }

    std::reverse(digit.begin(), digit.end());

    for (int i = 0; i < digit.size(); ++i)
    {
        for (int j = i + 1; j < digit.size(); ++j)
        {
            result.push_back(digit[i] + digit[j]);
        }
    }

    return result;
}

int main()
{
    assert(digits(156) == (std::vector<int>{6, 7, 11}));
    assert(digits(81596) == (std::vector<int>{9, 13, 17, 14, 6, 10, 7, 14, 11, 15}));
    assert(digits(3852) == (std::vector<int>{11, 8, 5, 13, 10, 7}));
    assert(digits(3264128) == (std::vector<int>{5, 9, 7, 4, 5, 11, 8, 6, 3, 4, 10, 10, 7, 8, 14, 5, 6, 12, 3, 9, 10}));
    assert(digits(999999) == (std::vector<int>{18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18}));

    std::cout << "all tests passed!" << std::endl;

    return 0;
}