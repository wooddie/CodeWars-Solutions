#include <iostream>
#include <vector>
#include <unordered_map>

class Solution
{
public:
    int majorityElement(std::vector<int> &nums)
    {
        std::unordered_map<int, int> list;

        for (const auto &n : nums)
        {
            list[n]++;
        }

        int result = 0;

        for (const auto &[key, value] : list)
        {
            if ((nums.size() / 2) < value)
            {
                result = key;
            }
        }

        return result;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {3, 2, 3};
    std::cout << s1.majorityElement(v) << std::endl;

    v = {2, 2, 1, 1, 1, 2, 2};
    std::cout << s1.majorityElement(v) << std::endl;

    return 0;
}