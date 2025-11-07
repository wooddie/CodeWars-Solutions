#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>

class Solution
{
public:
    void reverseString(std::vector<char> &s)
    {
        std::reverse(s.begin(), s.end());
    }
};

int main()
{
    Solution s1;

    std::vector<char> v = {'h', 'e', 'l', 'l', 'o'};
    s1.reverseString(v);

    v = {'H', 'a', 'n', 'n', 'a', 'h'};
    s1.reverseString(v);

    return 0;
}