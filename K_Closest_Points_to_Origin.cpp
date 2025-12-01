#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
    std::vector<std::vector<int>> kClosest(std::vector<std::vector<int>> &points, int k)
    {
        std::vector<std::vector<int>> res;
        std::vector<std::pair<int, std::vector<int>>> distPoint;

        for (auto v : points)
        {
            int d = v[0] * v[0] + v[1] * v[1];

            distPoint.push_back({d, v});
        }

        std::sort(distPoint.begin(), distPoint.end());

        for (int i = 0; i < k; ++i)
        {
            res.push_back(distPoint[i].second);
        }

        return res;
    }
};

int main()
{
    Solution s1;

    std::vector<std::vector<int>> v = {{3, 3}, {5, -1}, {-2, 4}};
    for (const auto &a : s1.kClosest(v, 2))
    {
        for (const auto &n : a)
        {
            std::cout << n << " ";
        }
    }
    std::cout << std::endl;

    v = {{1, 3}, {-2, 2}};
    for (const auto &a : s1.kClosest(v, 1))
    {
        for (const auto &n : a)
        {
            std::cout << n << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}