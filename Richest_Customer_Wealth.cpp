#include <iostream>
#include <vector>

class Solution
{
public:
    int maximumWealth(std::vector<std::vector<int>> &accounts)
    {
        int result = 0;
        for (const auto &v : accounts)
        {
            int sum = 0;
            for (const auto &n : v)
            {
                sum += n;
            }

            if (sum > result)
            {
                result = sum;
            }
        }

        return result;
    }
};

int main()
{
    Solution s1;

    std::vector<std::vector<int>> v = {{1, 2, 3}, {3, 2, 1}};
    std::cout << s1.maximumWealth(v) << std::endl;

    v = {{1, 5}, {7, 3}, {3, 5}};
    std::cout << s1.maximumWealth(v) << std::endl;

    v = {{2, 8, 7}, {7, 1, 3}, {1, 9, 5}};
    std::cout << s1.maximumWealth(v) << std::endl;

    return 0;
}