#include <iostream>
#include <algorithm>

class Solution
{
public:
    int heightChecker(std::vector<int> &heights)
    {
        std::vector<int> expected(heights.begin(), heights.end());
        std::sort(expected.begin(), expected.end());

        int count = 0;

        for (int i = 0; i < heights.size(); ++i)
        {
            if (heights[i] != expected[i])
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

    std::vector<int> v = {1, 1, 4, 2, 1, 3};
    std::cout << s1.heightChecker(v) << std::endl;

    v = {5, 1, 2, 3, 4};
    std::cout << s1.heightChecker(v) << std::endl;

    v = {1, 2, 3, 4, 5};
    std::cout << s1.heightChecker(v) << std::endl;

    return 0;
}