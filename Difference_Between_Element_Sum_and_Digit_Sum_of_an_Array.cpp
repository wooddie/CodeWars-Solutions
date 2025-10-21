#include <iostream>
#include <vector>

class Solution
{
public:
    int differenceOfSum(std::vector<int> &nums)
    {
        int element_sum = 0;
        int digit_sum = 0;

        for (int &n : nums)
        {
            element_sum += n;

            while (n > 0)
            {
                int digit = n % 10;
                n /= 10;
                digit_sum += digit;
            }
        }

        return element_sum - digit_sum;
    }
};

int main()
{
    Solution s1;

    std::vector<int> v = {1, 15, 6, 3};
    std::cout << s1.differenceOfSum(v) << std::endl;

    v = {1, 2, 3, 4};
    std::cout << s1.differenceOfSum(v) << std::endl;

    return 0;
}