#include <iostream>
#include <vector>
#include <unordered_set>

class Solution
{
public:
    std::vector<int> intersection(std::vector<int> &nums1, std::vector<int> &nums2)
    {
        std::unordered_set<int> list1 = {nums1.begin(), nums1.end()};
        std::unordered_set<int> list2 = {nums2.begin(), nums2.end()};
        std::vector<int> result;

        if (list1.size() < list2.size())
        {
            for (const auto &n : list1)
            {
                if (list2.contains(n))
                {
                    result.push_back(n);
                }
            }
        }
        else
        {
            for (const auto &n : list2)
            {
                if (list1.contains(n))
                {
                    result.push_back(n);
                }
            }
        }

        return result;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v1 = {1, 2, 2, 1};
    std::vector<int> v2 = {2, 2};
    for (const auto &n : s1.intersection(v1, v2))
    {
        std::cout << n;
    }
    std::cout << std::endl;

    v1 = {4, 9, 5};
    v2 = {9, 4, 9, 8, 4};
    for (const auto &n : s1.intersection(v1, v2))
    {
        std::cout << n;
    }
    std::cout << std::endl;

    return 0;
}