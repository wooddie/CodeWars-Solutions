#include <iostream>
#include <vector>

class Solution
{
public:
    int numberOfEmployeesWhoMetTarget(std::vector<int> &hours, int target)
    {
        int count = 0;

        for (const auto &n : hours)
        {
            if (n >= target)
            {
                count++;
            }
        }

        return count;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {0, 1, 2, 3, 4};
    std::cout << s1.numberOfEmployeesWhoMetTarget(v, 2) << std::endl;

    v = {5, 1, 4, 2, 2};
    std::cout << s1.numberOfEmployeesWhoMetTarget(v, 6) << std::endl;

    return 0;
}