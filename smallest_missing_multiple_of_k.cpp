#include <iostream>
#include <vector>
#include <unordered_set>

class Solution
{
public:
    int missingMultiple(std::vector<int> &nums, int k)
    {
        std::unordered_set<int> list(nums.begin(), nums.end());

        for (long long i = k;; i += k)
        {
            if (!list.contains(i))
            {
                return i;
            }
        }

        return 0;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {8, 2, 3, 4, 6};
    std::cout << s1.missingMultiple(v, 2) << std::endl;

    v = {1, 4, 7, 10, 15};
    std::cout << s1.missingMultiple(v, 5) << std::endl;

    return 0;
}