#include <iostream>
#include <vector>
#include <unordered_map>

class Solution
{
public:
    int singleNumber(std::vector<int> &nums)
    {
        std::unordered_map<int, int> list;

        for (int n : nums)
        {
            list[n]++;
        }

        for (auto &p : list)
        {
            if (p.second == 1)
            {
                return p.first;
            }
        }

        return -1;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {2, 2, 3, 2};
    std::cout << s1.singleNumber(v) << std::endl;

    v = {0, 1, 0, 1, 0, 1, 99};
    std::cout << s1.singleNumber(v) << std::endl;

    return 0;
}