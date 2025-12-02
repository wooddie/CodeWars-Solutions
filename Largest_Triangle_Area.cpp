#include <vector>
#include <iostream>

class Solution
{
public:
    double largestTriangleArea(std::vector<std::vector<int>> &points)
    {
        double area = 0.0;

        for (int i = 0; i < points.size() - 2; ++i)
        {
            for (int j = i + 1; j < points.size() - 1; ++j)
            {
                for (int k = j + 1; k < points.size(); ++k)
                {
                    int x1 = points[i][0], x2 = points[j][0], x3 = points[k][0];
                    int y1 = points[i][1], y2 = points[j][1], y3 = points[k][1];

                    double cur = 0.5 * abs(((x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2))));

                    area = (area < cur) ? cur : area;
                }
            }
        }

        return area;
    }
};

int main()
{
    Solution s1;

    std::vector<std::vector<int>> v = {{0, 0}, {0, 1}, {1, 0}, {0, 2}, {2, 0}};
    std::cout << s1.largestTriangleArea(v) << std::endl;
    v = {{1, 0}, {0, 0}, {0, 1}};
    std::cout << s1.largestTriangleArea(v) << std::endl;

    return 0;
}