#include <iostream>
#include <vector>

class Solution
{
public:
    void rotate(std::vector<int> &nums, int k)
    {
        std::vector<int> vec(nums.size());

        for (int i = 0; i < nums.size(); ++i)
        {
            int index = (i + k) % nums.size();

            vec[index] = nums[i];
        }

        nums = vec;

        for (const auto &n : nums)
        {
            std::cout << n << " ";
        }
        std::cout << std::endl;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    s1.rotate(v, 3);

    v = {-1, -100, 3, 99};
    s1.rotate(v, 2);

    return 0;
}