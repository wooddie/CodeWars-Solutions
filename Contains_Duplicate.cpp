#include <iostream>
#include <vector>
#include <unordered_set>

class Solution
{
public:
    bool containsDuplicate(std::vector<int> &nums)
    {
        std::unordered_set<int> list;

        for (const auto &a : nums)
        {
            if (list.contains(a))
            {
                return true;
            }
            else
            {
                list.insert(a);
            }
        }

        return false;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {1, 2, 3, 1};
    std::cout << std::boolalpha << s1.containsDuplicate(v) << std::endl;

    v = {1, 2, 3, 4};
    std::cout << std::boolalpha << s1.containsDuplicate(v) << std::endl;

    v = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    std::cout << std::boolalpha << s1.containsDuplicate(v) << std::endl;

    return 0;
}