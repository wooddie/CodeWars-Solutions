#include <iostream>
#include <vector>

class Solution
{
public:
    std::vector<int> countBits(int n)
    {
        std::vector<int> result(n + 1);

        for (int i = 0; i <= n; ++i)
        {
            int x = i;
            int count = 0;

            while (x > 0)
            {
                count += x & 1;
                x >>= 1;
            }

            result[i] = count;
        }

        return result;
    }
};

int main()
{
    Solution s1;

    for (const auto &v : s1.countBits(2))
    {
        std::cout << v;
    }
    std::cout << std::endl;

    for (const auto &v : s1.countBits(5))
    {
        std::cout << v;
    }
    std::cout << std::endl;

    return 0;
}