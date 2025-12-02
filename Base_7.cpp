#include <iostream>
#include <string>

class Solution
{
public:
    std::string convertToBase7(int num)
    {
        if (num == 0)
        {
            return "0";
        }

        bool neg = num < 0;
        int n = abs(num);
        std::string res;

        while (n != 0)
        {
            int d = n % 7;
            res.push_back('0' + d);
            n /= 7;
        }

        if (neg)
        {
            res.push_back('-');
        }

        std::reverse(res.begin(), res.end());

        return res;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.convertToBase7(100) << std::endl;
    std::cout << s1.convertToBase7(-7) << std::endl;

    return 0;
}