#include <iostream>
#include <vector>
#include <unordered_set>

class Solution
{
public:
    std::vector<int> getSneakyNumbers(std::vector<int> &nums)
    {
        std::vector<int> result;
        std::unordered_set<int> list;

        for (const auto &n : nums)
        {
            if (list.contains(n))
            {
                result.push_back(n);
            }

            list.insert(n);
        }

        std::sort(result.begin(), result.end());

        return result;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {0, 1, 1, 0};
    for (const auto &a : s1.getSneakyNumbers(v))
    {
        std::cout << a;
    }
    std::cout << std::endl;

    v = {0, 3, 2, 1, 3, 2};
    for (const auto &a : s1.getSneakyNumbers(v))
    {
        std::cout << a;
    }
    std::cout << std::endl;

    v = {7, 1, 5, 4, 3, 4, 6, 0, 9, 5, 8, 2};
    for (const auto &a : s1.getSneakyNumbers(v))
    {
        std::cout << a;
    }
    std::cout << std::endl;

    return 0;
}