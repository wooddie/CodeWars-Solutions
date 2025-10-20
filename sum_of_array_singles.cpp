#include <iostream>
#include <vector>
#include <cassert>
#include <unordered_map>

int repeats(std::vector<int> v)
{
    int sum = 0;

    std::unordered_map<int, int> list;

    for (auto a : v)
    {
        list[a]++;
    }

    for (auto p : list)
    {
        if (p.second == 1)
        {
            sum += p.first;
        }
    }

    return sum;
}

int main()
{
    using VI = std::vector<int>;

    assert(repeats(VI{4, 5, 7, 5, 4, 8}) == (15));
    assert(repeats(VI{9, 10, 19, 13, 19, 13}) == (19));
    assert(repeats(VI{16, 0, 11, 4, 8, 16, 0, 11}) == (12));
    assert(repeats(VI{5, 17, 18, 11, 13, 18, 11, 13}) == (22));

    return 0;
}