#include <vector>
#include <iostream>

class Solution
{
public:
    int findNumbers(std::vector<int> &nums)
    {
        int count = 0;

        for(auto n : nums)
        {
            std::string str = std::to_string(n);
            if (str.size() % 2 == 0)
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

    std::vector<int> v = {12, 345, 2, 6, 7896};
    std::cout << s1.findNumbers(v) << std::endl;

    v = {555, 901, 482, 1771};
    std::cout << s1.findNumbers(v) << std::endl;

    return 0;
}