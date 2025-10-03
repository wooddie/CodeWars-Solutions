#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
    double findMedianSortedArrays(std::vector<int> &nums1, std::vector<int> &nums2)
    {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        std::sort(nums1.begin(), nums1.end());

        size_t pos = nums1.size() / 2;
        if (nums1.size() % 2 == 0)
        {
            return (nums1[pos] + nums1[pos - 1]) / 2.0;
        }
        else
        {
            return static_cast<double>(nums1[pos]);
        }

        return 0.0;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v1 = {1, 3};
    std::vector<int> v2 = {2};
    std::cout << s1.findMedianSortedArrays(v1, v2) << std::endl;

    v1 = {1, 2};
    v2 = {3, 4};
    std::cout << s1.findMedianSortedArrays(v1, v2) << std::endl;

    return 0;
}