#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_map>

class Solution
{
public:
    bool containsNearbyDuplicate(std::vector<int> &nums, int k)
    {
        std::unordered_map<int, int> list;

        for (int i = 0; i < nums.size(); ++i)
        {
            if (list.contains(nums[i]))
            {
                if (i - list[nums[i]] <= k)
                {
                    return true;
                }
            }

            list[nums[i]] = i;
        }

        return false;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {1, 2, 3, 1};
    std::cout << std::boolalpha << s1.containsNearbyDuplicate(v, 3) << std::endl;

    v = {1, 0, 1, 1};
    std::cout << std::boolalpha << s1.containsNearbyDuplicate(v, 1) << std::endl;

    v = {1, 2, 3, 1, 2, 3};
    std::cout << std::boolalpha << s1.containsNearbyDuplicate(v, 2) << std::endl;

    return 0;
}