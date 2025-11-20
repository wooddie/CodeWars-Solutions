#include <iostream>
#include <vector>

class Solution
{
public:
    std::vector<int> nextGreaterElement(std::vector<int> &nums1, std::vector<int> &nums2)
    {
        std::vector<int> ans(nums1.size());
        int i = -1;

        for (const auto &n : nums1)
        {
            auto it = std::find(nums2.begin(), nums2.end(), n);
            int val = -1;

            if (it != nums2.end())
            {
                for (auto jt = it + 1; jt != nums2.end(); ++jt)
                {
                    if (*jt > n)
                    {
                        val = *jt;
                        break;
                    }
                }
            }

            ans[++i] = val;
        }

        return ans;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v1 = {4, 1, 2};
    std::vector<int> v2 = {1, 3, 4, 2};

    for (const auto &n : s1.nextGreaterElement(v1, v2))
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    v1 = {2, 4};
    v2 = {1, 2, 3, 4};

    for (const auto &n : s1.nextGreaterElement(v1, v2))
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}