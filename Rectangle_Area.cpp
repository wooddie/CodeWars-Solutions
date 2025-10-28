#include <iostream>

class Solution
{
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2)
    {
        int overlap_w = std::max(0, std::min(ax2, bx2) - std::max(ax1, bx1));
        int overlap_h = std::max(0, std::min(ay2, by2) - std::max(ay1, by1));

        int overlap_s = overlap_w * overlap_h;

        int s_a = (ax2 - ax1) * (ay2 - ay1);
        int s_b = (bx2 - bx1) * (by2 - by1);

        return (s_a + s_b) - overlap_s;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.computeArea(-3, 0, 3, 4, 0, -1, 9, 2) << std::endl;
    std::cout << s1.computeArea(-2, -2, 2, 2, -2, -2, 2, 2) << std::endl;

    return 0;
}