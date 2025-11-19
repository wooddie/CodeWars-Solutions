#include <iostream>
#include <vector>

class Solution
{
public:
    int findFinalValue(std::vector<int> &nums, int original)
    {
        while (true)
        {
            if (std::find(nums.begin(), nums.end(), original) != nums.end())
            {
                original = 2 * original;
            }
            else
            {
                break;
            }
        }

        return original;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {5, 3, 6, 1, 12};
    std::cout << s1.findFinalValue(v, 3) << std::endl;

    v = {2, 7, 9};
    std::cout << s1.findFinalValue(v, 4) << std::endl;

    return 0;
}