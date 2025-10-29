#include <iostream>
#include <vector>

class Solution
{
public:
    int countServers(std::vector<std::vector<int>> &grid)
    {
        int count = 0;
        std::vector<int> rowCount(grid.size(), 0);
        std::vector<int> colCount(grid[0].size(), 0);

        for (int i = 0; i < grid.size(); ++i)
        {
            for (int j = 0; j < grid[0].size(); ++j)
            {
                if (grid[i][j] == 1)
                {
                    rowCount[i]++;
                    colCount[j]++;
                }
            }
        }

        for (int i = 0; i < grid.size(); ++i)
        {
            for (int j = 0; j < grid[0].size(); ++j)
            {
                if (grid[i][j] == 1 && (rowCount[i] > 1 || colCount[j] > 1))
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

    std::vector<std::vector<int>> v = {{1, 0}, {0, 1}};
    std::cout << s1.countServers(v) << std::endl;

    v = {{1, 0}, {1, 1}};
    std::cout << s1.countServers(v) << std::endl;

    v = {{1, 1, 0, 0}, {0, 0, 1, 0}, {0, 0, 1, 0}, {0, 0, 0, 1}};
    std::cout << s1.countServers(v) << std::endl;

    return 0;
}