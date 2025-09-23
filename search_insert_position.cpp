#include <iostream>
#include <string>
#include <sstream>
#include <vector>

class Solution
{
public:
    int searchInsert(std::vector<int> &nums, int target)
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
            else if (nums[mid] < target)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return left;
    }
};

int main()
{
    Solution s1;
    std::vector<int> v = {1, 3, 5, 6};
    std::cout << s1.searchInsert(v, 5) << std::endl;
    std::cout << s1.searchInsert(v, 2) << std::endl;
    std::cout << s1.searchInsert(v, 7) << std::endl;

    return 0;
}