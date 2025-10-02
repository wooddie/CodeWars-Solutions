#include <iostream>
#include <vector>
#include <map>

class Solution
{
public:
    int sumOfUnique(std::vector<int> &nums)
    {
        std::unordered_map<int, int> freq;

        for (int n : nums)
        {
            freq[n]++;
        }

        int sum = 0;

        for (auto &f : freq)
        {
            if (f.second == 1)
            {
                sum += f.first;
            }
        }

        return sum;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {1, 2, 3, 2};
    std::cout << s1.sumOfUnique(v) << std::endl;

    v = {1, 1, 1, 1, 1};
    std::cout << s1.sumOfUnique(v) << std::endl;

    v = {1, 2, 3, 4, 5};
    std::cout << s1.sumOfUnique(v) << std::endl;

    return 0;
}