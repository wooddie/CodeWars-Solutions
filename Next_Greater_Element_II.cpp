#include <iostream>
#include <vector>

class Solution
{
public:
    std::vector<int> nextGreaterElements(std::vector<int> &nums)
    {
        std::vector<int> res;
        int n = nums.size();

        for (int i = 0; i < n; ++i)
        {
            int j = (i + 1) % n;
            bool found = false;

            while (j != i)
            {
                if (nums[j] > nums[i])
                {
                    res.push_back(nums[j]);
                    found = true;
                    break;
                }

                j = (j + 1) % n;
            }

            if (!found)
                res.push_back(-1);
        }

        return res;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {1, 2, 1};
    for (const auto &n : s1.nextGreaterElements(v))
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    v = {1, 2, 3, 4, 3};
    for (const auto &n : s1.nextGreaterElements(v))
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}