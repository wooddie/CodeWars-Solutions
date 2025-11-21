#include <iostream>
#include <vector>

class Solution
{
public:
    std::vector<int> getConcatenation(std::vector<int> &nums)
    {
        std::vector<int> ans = {nums.begin(), nums.end()};

        ans.insert(ans.end(), nums.begin(), nums.end());

        return ans;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {1, 2, 1};
    for (const auto &n : s1.getConcatenation(v))
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    v = {1, 3, 2, 1};
    for (const auto &n : s1.getConcatenation(v))
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}