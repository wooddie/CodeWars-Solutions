#include <iostream>
#include <vector>
#include <numeric>
#include <unordered_set>

class Solution
{
public:
    std::vector<int> findDisappearedNumbers(std::vector<int> &nums)
    {
        int from = 1;
        int to = nums.size();

        std::vector<int> full(to - from + 1);
        std::iota(full.begin(), full.end(), from);

        std::unordered_set<int> s(nums.begin(), nums.end());

        std::vector<int> missing;
        for (int num : full)
        {
            if (s.find(num) == s.end())
            {
                missing.push_back(num);
            }
        }

        return missing;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {4, 3, 2, 7, 8, 2, 3, 1};
    for (auto n : s1.findDisappearedNumbers(v))
    {
        std::cout << n;
    }
    std::cout << std::endl;

    v = {1, 1};
    for (auto n : s1.findDisappearedNumbers(v))
    {
        std::cout << n;
    }
    std::cout << std::endl;

    return 0;
}