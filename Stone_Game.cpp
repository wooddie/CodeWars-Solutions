#include <iostream>
#include <vector>

class Solution
{
public:
    bool stoneGame(std::vector<int> &piles)
    {
        return 1;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {5, 3, 4, 5};
    std::cout << std::boolalpha << s1.stoneGame(v) << std::endl;
    v = {3, 7, 2, 3};
    std::cout << std::boolalpha << s1.stoneGame(v) << std::endl;

    return 0;
}