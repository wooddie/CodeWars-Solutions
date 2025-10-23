#include <iostream>
#include <vector>
#include <unordered_set>

class Solution
{
public:
    bool search(std::vector<int> &nums, int target)
    {
        return std::find(nums.begin(), nums.end(), target) != nums.end();
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {2, 5, 6, 0, 0, 1, 2};
    std::cout << std::boolalpha << s1.search(v, 0) << std::endl;

    v = {2, 5, 6, 0, 0, 1, 2};
    std::cout << std::boolalpha << s1.search(v, 3) << std::endl;

    return 0;
}