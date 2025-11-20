#include <iostream>
#include <vector>

class Solution
{
public:
    std::vector<int> selfDividingNumbers(int left, int right)
    {
        std::vector<int> result;

        for (int i = left; i <= right; ++i)
        {
            int num = i;
            bool stat = true;

            while (num > 0)
            {
                int digit = num % 10;

                if (digit == 0)
                {
                    stat = false;
                    break;
                }

                if (i % digit != 0)
                {
                    stat = false;
                    break;
                }

                num /= 10;
            }

            if (stat)
            {
                result.push_back(i);
            }
        }

        return result;
    }
};

int main()
{
    Solution s1;

    for (const auto &n : s1.selfDividingNumbers(1, 22))
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    for (const auto &n : s1.selfDividingNumbers(47, 85))
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}