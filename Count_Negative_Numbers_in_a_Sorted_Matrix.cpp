#include <iostream>
#include <vector>

class Solution
{
public:
    int countNegatives(std::vector<std::vector<int>> &grid)
    {
        int count = 0;

        for (const auto &vec : grid)
        {
            for (const auto &num : vec)
            {
                if (num < 0)
                {
                    count++;
                }
            }
        }

        return count;
    }
};

int main()
{
    Solution s1;

    std::vector<std::vector<int>> v = {{4, 3, 2, -1}, {3, 2, 1, -1}, {1, 1, -1, -2}, {-1, -1, -2, -3}};
    std::cout << s1.countNegatives(v) << std::endl;

    v = {{3, 2}, {1, 0}};
    std::cout << s1.countNegatives(v) << std::endl;

    return 0;
}