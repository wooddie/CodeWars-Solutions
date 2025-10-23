#include <iostream>
#include <vector>

class Solution
{
public:
    int findPeakElement(std::vector<int> &nums)
    {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right)
        {
            int mid = left + (right - left) / 2;

            if (nums[mid] > nums[mid + 1])
            {
                right = mid;
            }
            else
            {
                left = mid + 1;
            }
        }

        return left;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {1, 2, 3, 1};
    std::cout << s1.findPeakElement(v) << std::endl;

    v = {1, 2, 1, 3, 5, 6, 4};
    std::cout << s1.findPeakElement(v) << std::endl;

    return 0;
}