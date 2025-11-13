#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
    bool searchMatrix(std::vector<std::vector<int>> &matrix, int target)
    {
        for (const auto &a : matrix)
        {
            auto it = std::find(a.begin(), a.end(), target);

            if (it != a.end())
            {
                return true;
            }
        }

        return false;
    }
};

int main()
{
    Solution s1;

    std::vector<std::vector<int>> v = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    std::cout << std::boolalpha << s1.searchMatrix(v, 3) << std::endl;

    v = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    std::cout << std::boolalpha << s1.searchMatrix(v, 13) << std::endl;

    return 0;
}