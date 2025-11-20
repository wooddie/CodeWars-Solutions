#include <iostream>
#include <vector>
#include <cmath>

class Solution
{
public:
    std::vector<int> constructRectangle(int area)
    {
        int w = sqrt(area);

        while (area % w != 0)
        {
            w--;
        }

        int l = area / w;

        return {l, w};
    }
};

int main()
{
    Solution s1;

    for (const auto &n : s1.constructRectangle(4))
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    for (const auto &n : s1.constructRectangle(37))
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    for (const auto &n : s1.constructRectangle(122122))
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}