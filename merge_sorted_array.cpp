#include <vector>
#include <iostream>

class Solution
{
public:
    void merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n)
    {
        nums1.erase(nums1.end() - n, nums1.end());
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        std::sort(nums1.begin(), nums1.end());
    }
};

int main()
{
    Solution s1;
    std::vector<int> v1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    std::vector<int> v2 = {2, 5, 6};
    int n = 3;
    s1.merge(v1, m, v2, n); //* [1,2,2,3,5,6]

    v1 = {1};
    m = 1;
    v2 = {};
    n = 0;
    s1.merge(v1, m, v2, n); //* [1]

    v1 = {0};
    m = 0;
    v2 = {1};
    n = 1;
    s1.merge(v1, m, v2, n); //* [1]
}