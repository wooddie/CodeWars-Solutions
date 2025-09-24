#include <vector>
#include <iostream>

class Solution
{
public:
    int findLeft(const std::vector<int> &nums, int target)
    {
        int low = 0, high = nums.size() - 1;
        int res = -1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
            {
                res = mid;
                high = mid - 1;
            }
            else if (nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return res;
    }

    int findRight(const std::vector<int> &nums, int target)
    {
        int low = 0, high = nums.size() - 1;
        int res = -1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
            {
                res = mid;
                low = mid + 1;
            }
            else if (nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return res;
    }

    std::vector<int> searchRange(std::vector<int> &nums, int target)
    {
        int left = findLeft(nums, target);
        int right = findRight(nums, target);
        return {left, right};
    }
};

int main()
{
    Solution s1;
    std::vector<int> v1 = {5, 7, 7, 8, 8, 10};
    for (int n : s1.searchRange(v1, 8))
    {
        std::cout << n;
    }
    std::cout << std::endl;

    return 0;
}