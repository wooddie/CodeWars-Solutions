#include <iostream>
#include <vector>

class Solution
{
public:
    int search(std::vector<int> &nums, int target)
    {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target)
            {
                return mid;
            }

            if (nums[mid] < target)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        return -1;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {-1, 0, 3, 5, 9, 12};
    std::cout << s1.search(v, 9) << std::endl;

    v = {-1, 0, 3, 5, 9, 12};
    std::cout << s1.search(v, 2) << std::endl;

    return 0;
}