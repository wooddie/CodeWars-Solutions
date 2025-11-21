#include <iostream>
#include <vector>

class Solution
{
public:
    std::vector<int> recoverOrder(std::vector<int> &order, std::vector<int> &friends)
    {
        std::vector<int> result;

        for (const auto &n : order)
        {
            auto it = std::find(friends.begin(), friends.end(), n);

            if (it != friends.end())
            {
                result.push_back(n);
            }
        }

        return result;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v1 = {3, 1, 2, 5, 4};
    std::vector<int> v2 = {1, 3, 4};
    for (const auto &n : s1.recoverOrder(v1, v2))
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    v1 = {1, 4, 5, 3, 2};
    v2 = {2, 5};
    for (const auto &n : s1.recoverOrder(v1, v2))
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}