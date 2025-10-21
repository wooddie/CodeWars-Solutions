#include <iostream>
#include <vector>
#include <string>

class Solution
{
public:
    std::string findDifferentBinaryString(std::vector<std::string> &nums)
    {
        std::string result;

        for (int i = 0; i < nums.size(); ++i)
        {
            result += (nums[i][i] == '0') ? '1' : '0';
        }

        return result;
    }
};

int main()
{
    Solution s1;

    std::vector<std::string> v = {"01", "10"};
    std::cout << s1.findDifferentBinaryString(v) << std::endl;

    v = {"00", "01"};
    std::cout << s1.findDifferentBinaryString(v) << std::endl;

    v = {"111", "011", "001"};
    std::cout << s1.findDifferentBinaryString(v) << std::endl;

    return 0;
}