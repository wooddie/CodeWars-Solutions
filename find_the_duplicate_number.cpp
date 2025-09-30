#include <iostream>
#include <vector>
#include <unordered_set>

class Solution
{
public:
    int findDuplicate(std::vector<int> &nums)
    {
        auto tortoise = nums[0];
        auto hare = nums[0];

        do
        {
            tortoise = nums[tortoise];
            hare = nums[nums[hare]];
        } while (tortoise != hare);

        tortoise = nums[0];

        while (tortoise != hare)
        {
            tortoise = nums[tortoise];
            hare = nums[hare];
        }

        return tortoise;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {1, 3, 4, 2, 2};
    std::cout << s1.findDuplicate(v) << std::endl;

    v = {3, 1, 3, 4, 2};
    std::cout << s1.findDuplicate(v) << std::endl;

    v = {3, 3, 3, 3, 3};
    std::cout << s1.findDuplicate(v) << std::endl;

    return 0;
}