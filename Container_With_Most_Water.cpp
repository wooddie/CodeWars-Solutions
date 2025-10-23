#include <iostream>
#include <vector>

class Solution
{
public:
    int maxArea(std::vector<int> &height)
    {
        int left = 0;
        int right = height.size() - 1;
        int max_area = 0;

        while (left < right)
        {
            int area = (right - left) * std::min(height[left], height[right]);

            if (area > max_area)
            {
                max_area = area;
            }

            if (height[right] <= height[left])
            {
                right--;
            }
            else
            {
                left++;
            }
        }

        return max_area;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    std::cout << s1.maxArea(v) << std::endl;

    v = {1, 1};
    std::cout << s1.maxArea(v) << std::endl;

    return 0;
}