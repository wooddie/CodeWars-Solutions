#include <vector>
#include <iostream>

class Solution
{
public:
    std::vector<int> plusOne(std::vector<int> &digits)
    {
        int n = digits.size();

        for (int i = n - 1; i >= 0; --i)
        {
            if (digits[i] < 9)
            {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main()
{
    Solution s1;
    std::vector<int> v = {1, 2, 9};
    for (int n : s1.plusOne(v))
    {
        std::cout << n;
    }
    std::cout << std::endl;

    v = {4, 3, 2, 1};
    for (int n : s1.plusOne(v))
    {
        std::cout << n;
    }
    std::cout << std::endl;

    v = {9};
    for (int n : s1.plusOne(v))
    {
        std::cout << n;
    }
    std::cout << std::endl;

    return 0;
}