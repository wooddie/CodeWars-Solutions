#include <iostream>
#include <vector>
#include <unordered_set>

class Solution
{
public:
    int findCenter(std::vector<std::vector<int>> &edges)
    {
        int result = 0;
        std::unordered_set<int> set;

        for (const auto &v : edges)
        {
            for (int x : v)
            {
                if (set.count(x))
                {
                    return x;
                }

                set.insert(x);
            }
        }

        return result;
    }
};

int main()
{
    Solution s1;

    std::vector<std::vector<int>> v = {{1, 2}, {2, 3}, {4, 2}};
    std::cout << s1.findCenter(v) << std::endl;

    v = {{1, 2}, {5, 1}, {1, 3}, {1, 4}};
    std::cout << s1.findCenter(v) << std::endl;

    return 0;
}