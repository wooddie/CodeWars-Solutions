#include <iostream>
#include <vector>

class Solution
{
public:
    int singleNonDuplicate(std::vector<int> &nums)
    {
        int x = 0;
        for (int n : nums)
        {
            x ^= n;
        }

        return x;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    std::cout << s1.singleNonDuplicate(v) << std::endl;

    v = {3, 3, 7, 7, 10, 11, 11};
    std::cout << s1.singleNonDuplicate(v) << std::endl;

    return 0;
}