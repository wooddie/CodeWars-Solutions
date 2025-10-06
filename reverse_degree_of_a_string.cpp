#include <iostream>
#include <string>

class Solution
{
public:
    int reverseDegree(std::string s)
    {
        int count = 1;
        int sum = 0;

        for (char c : s)
        {
            int num = 26 - (c - 'a');
            sum += num * count;

            count++;
        }

        return sum;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.reverseDegree("abc") << std::endl;
    std::cout << s1.reverseDegree("zaza") << std::endl;

    return 0;
}