#include <iostream>
#include <vector>

class Solution
{
public:
    std::vector<int> decimalRepresentation(int n)
    {
        std::vector<int> result;
        unsigned long long power = 1;

        while (n > 0)
        {
            int digit = n % 10;

            if (digit != 0)
            {
                result.push_back(digit * power);
            }

            n /= 10;
            power *= 10;
        }
        std::reverse(result.begin(), result.end());

        return result;
    }
};

int main()
{
    Solution s1;

    for (int n : s1.decimalRepresentation(537))
    {
        std::cout << n;
    }
    std::cout << std::endl;

    for (int n : s1.decimalRepresentation(102))
    {
        std::cout << n;
    }
    std::cout << std::endl;

    for (int n : s1.decimalRepresentation(6))
    {
        std::cout << n;
    }
    std::cout << std::endl;

    return 0;
}