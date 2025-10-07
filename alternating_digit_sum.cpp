#include <iostream>

class Solution
{
public:
    int alternateDigitSum(int n)
    {
        std::string str = std::to_string(n);
        int result = 0;

        for (size_t i = 0; i < str.size(); ++i)
        {
            int digit = str[i] - '0';

            if ((i + 1) % 2 == 0)
            {
                result += (digit * -1);
            }
            else
            {
                result += digit;
            }
        }

        return result;
    }
};

int main()
{
    Solution s1;

    std::cout << s1.alternateDigitSum(521) << std::endl;
    std::cout << s1.alternateDigitSum(111) << std::endl;
    std::cout << s1.alternateDigitSum(886996) << std::endl;

    return 0;
}