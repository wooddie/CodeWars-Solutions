#include <iostream>
#include <unordered_set>

class Solution
{
public:
    bool isHappy(int n)
    {
        std::unordered_set<int> list;

        while (n != 1 && !list.count(n))
        {
            list.insert(n);

            int sum = 0;
            while (n > 0)
            {
                int digit = n % 10;
                sum += digit * digit;
                n /= 10;
            }

            n = sum;
        }

        return n == 1;
    }
};

int main()
{
    Solution s1;

    std::cout << std::boolalpha << s1.isHappy(19) << std::endl;
    std::cout << std::boolalpha << s1.isHappy(2) << std::endl;

    return 0;
}