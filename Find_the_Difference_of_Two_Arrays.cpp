#include <iostream>
#include <vector>
#include <unordered_set>

class Solution
{
public:
    std::vector<std::vector<int>> findDifference(std::vector<int> &nums1, std::vector<int> &nums2)
    {
        std::vector<std::vector<int>> result;
        std::vector<int> vec1, vec2;

        std::unordered_set<int> list1(nums1.begin(), nums1.end());
        std::unordered_set<int> list2(nums2.begin(), nums2.end());

        for (const auto &x : list1)
        {
            if (!list2.contains(x))
            {
                vec1.push_back(x);
            }
        }

        for (const auto &y : list2)
        {
            if (!list1.contains(y))
            {
                vec2.push_back(y);
            }
        }

        result.push_back(vec1);
        result.push_back(vec2);

        return result;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v1 = {1, 2, 3};
    std::vector<int> v2 = {2, 4, 6};
    for (const auto &v : s1.findDifference(v1, v2))
    {
        for (const auto &n : v)
        {
            std::cout << n;
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    v1 = {1, 2, 3, 3};
    v2 = {1, 1, 2, 2};
    for (const auto &v : s1.findDifference(v1, v2))
    {
        for (const auto &n : v)
        {
            std::cout << n;
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    return 0;
}