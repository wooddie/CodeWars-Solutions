#include <iostream>
#include <algorithm>
#include <vector>

class Solution
{
public:
    int search(std::vector<int> &nums, int target)
    {
        int start = 0, end = nums.size() - 1;

        while (start <= end)
        {
            int mid = (start + end) / 2;

            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] >= nums[start])
            {
                if (nums[mid] >= target && nums[start] <= target)
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }
            else
            {
                if (nums[mid] <= target && nums[end] >= target)
                {
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
        }

        return -1;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {4, 5, 6, 7, 0, 1, 2};
    std::cout << s1.search(v, 0) << std::endl;
    v = {4, 5, 6, 7, 0, 1, 2};
    std::cout << s1.search(v, 3) << std::endl;
    v = {1};
    std::cout << s1.search(v, 0) << std::endl;
}